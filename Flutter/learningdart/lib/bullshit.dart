import 'package:flutter/material.dart';

class HomePage extends StatefulWidget {
  const HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  late final TextEditingController _controller;

  @override
  void initState() {
    _controller = TextEditingController();
    super.initState();
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return BlocProvider(
      create: (context) => CounterBloc(),
      child: Scaffold(
        appBar: AppBar(
          title: const Text('testing Bloc'),
          foregroundColor: Colors.amber,
          backgroundColor: Colors.blueAccent,
          elevation: 5.0,
          shadowColor: const Color.fromARGB(156, 7, 54, 182),
          surfaceTintColor: Colors.cyan,
          systemOverlayStyle: SystemUiOverlayStyle.light,
          titleTextStyle: const TextStyle(fontSize: 20),
          shape: const BeveledRectangleBorder(
              side: BorderSide(
            color: Color.fromARGB(255, 101, 135, 238),
            width: 7,
          )),
        ),
        backgroundColor: Colors.tealAccent,
        body: BlocConsumer<CounterBloc, CounterState>(
          builder: (context, state) {
            final invalidValue =
                (state is CounterStateInvalidNumber) ? state.invalidValue : '';
            return Column(
              children: [
                Text('Current Value => ${state.value}'),
                Visibility(
                  visible:
                      // state
                      //     is CounterStateInvalidNumber,
                      invalidValue != '', // have to test if this works or not
                  child: Text('Invalid input : $invalidValue'),
                ),
                TextField(
                  controller: _controller,
                  decoration: const InputDecoration(
                    hintText: 'Enter a number here',
                  ),
                  keyboardType: TextInputType.number,
                ),
                Row(children: [
                  IconButton(
                      onPressed: () {
                        context
                            .read<CounterBloc>()
                            .add(IncrementEvent(_controller.text));
                      },
                      icon: const Icon(Icons.add)),
                  IconButton(
                      onPressed: () {
                        context
                            .read<CounterBloc>()
                            .add(DecrementEvent(_controller.text));
                      },
                      icon: const Icon(Icons.minimize)),
                ]),
              ],
            );
          },
          listener: (context, state) {
            _controller.clear();
          },
        ),
      ),
    );
  }
}

@immutable
abstract class CounterState {
  final int value;

  const CounterState(this.value);
}

@immutable
class CounterStateValid extends CounterState {
  const CounterStateValid(super.value);
}

@immutable
class CounterStateInvalidNumber extends CounterState {
  final String invalidValue;

  // const CounterStateInvalidNumber(super.value,
  //     {required this.invalidValue}); // not sure how well it works will try
  const CounterStateInvalidNumber({
    required this.invalidValue,
    required previousValue,
  }) : super(previousValue);
}

@immutable
abstract class CounterEvent {
  final String value;

  const CounterEvent(this.value);
}

class IncrementEvent extends CounterEvent {
  const IncrementEvent(super.value);
}

class DecrementEvent extends CounterEvent {
  const DecrementEvent(super.value);
}

class CounterBloc extends Bloc<CounterEvent, CounterState> {
  CounterBloc() : super(const CounterStateValid(0)) {
    on<IncrementEvent>(
      (event, emit) {
        final integer = int.tryParse(event.value);
        if (integer == null) {
          emit(CounterStateInvalidNumber(
            invalidValue: event.value,
            previousValue: state
                .value, // state is the current state before a new one was emitted
          ));
        } else {
          emit(CounterStateValid(state.value + integer));
        }
      },
    );
    on<DecrementEvent>(
      (event, emit) {
        final integer = int.tryParse(event.value);
        if (integer == null) {
          emit(CounterStateInvalidNumber(
            invalidValue: event.value,
            previousValue: state
                .value, // state is the current state before a new one was emitted
          ));
        } else {
          emit(CounterStateValid(state.value - integer));
        }
      },
    );
  }
}
