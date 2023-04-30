import 'dart:convert';
// import 'dart:html';
import 'dart:io';

import 'package:flutter/material.dart';

/*
//fucntion defination in dart 
String getFullName(String firstName, String lastName) => '$firstName $lastName';
//another syntax for fucntion 
// has to be a single line function 

String printHello(String name) {
  // return "Hello " + name;
  return 'Hello $name'; // using interpolation method
}

void doNotDo() {}*/

void main() {
  runApp(const MyApp());
}

List<String>? getList() {
  return ['a', 'b'];
}

// to write most of the code
void test() {
  /*
  final name;
  name = 'Foo'; // a const cant be initialized so but a constant could be
  if (name == 'Foo')
    print('Equality');
  else if (name == 'Goo\'') // escape ' by \'
    print('goo');
  else
    print('Fuck off');
*/ // if else in dart

  //print("Mudit" * 100);
  // dart allows multiplication on string
  // there are even custom operators in dart and they could be overwritten

  // dynamic name = 7; // dynamic is like auto data type in cpp

  // List<int> arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
  // int length = arr.length;
  // print(length);
//  List arr =[1,2,3,4,5,6,7,8,9];  // List<dynamic> arrdart has a dynamic list type
  // creating  a list in dart
// final does not need a data type
// List - a list of homogemous things
// sets - a list of unique things
  // var name = {1, 2, 3, 4};
  // print(name);
  // detected data type set<int>
  // using the var or const keyword is the only thing necessary dart automatically detects the data type
  // complete set or list could be printed like python
  // a list or set of objects could also be created
  // var name = [1, 'Hello'];
  // List<object> name

  // Maps in dart - hold key value pairs
  // var dart = {'A': 7, 'B': 2, 'C': 3}; // syntax key:value
  // print(dart);
// it is Map<String,int>
  // Map dart = {'A':7 , 'B':2 , 'C':3};   // syntax key:value
  // if you specify Map without any data type it means a Map<dynamic,dynamic>

  // String a ;
  // print(a);
  // error generating codes

// Null safety in dart
  // final a; error line
  final a = null; // could be const a
  print(a);

  // String b = null; //error line
  String? b = null; // makes b a nullable String
  b = 'Mudit'; // valid line of code b is nullable not necessary to be null
  // int c = null; // error line of code
  int? x = null; // allowed

  // that question mark ? tells that it can be absent
  // List<String>? array = ['Mudit','Ananya']; // working line of code
  List<String?>? array = ['Mudit', 'Ananya', null]; // working line of code
  // List?<String> arr ; Invalid syntax
  // that question marks makes it nullable

  // cherry picking non null values
  const String firstname = 'foo';
  const String? midname = null;
  const String lastname = 'bax';

  // if we have to get the first non null value out of these three
// using ifelif
  // if (firstname != null) {
  //   print("firstname:$firstname");
  // } else if (midname != null) {
  //   print("middlename:$midname");
  // } else if (lastname != null) {
  //   print("latname:$lastname");
  // } else {
  //   print("all is null");
  // }

  // there is a better way of doing this
  // using this infinx operator ??
  //
  // const String result = firstname ?? midname ?? lastname; // error line of code because the righthand side could be null in the case all three are null

  const String? result =
      firstname ?? midname ?? lastname; // working line of code
  // keeping only const or final does not need ? as ? goes with data types

  // Null aware assignment operator ??=
  // first non null value assigned
  String? name = firstname;
  // String? name = midname;
  // String? name ??= firstname; invalid ??= operator cannot be used for the first assignment itself
  name ??= midname; // if name is null then assign middle name ??=
  // name ??= firstname;
  name ??= lastname; // lastname is also non null but does not get assigned
  // trying to make it non null
  // the operator gives it the first non null value it gets and then doesnot change if the left side is non null already
  //
  // as midname is null it cannot be assigned and thus the print will result in the firstname value foo
  print(name);

  // ternary conditional operator available
  // 8 > 9 ? print("Hello") : print('Hi');

  // Conditional invocation ? .
  // . operator eg - array.length is used to access the properties of any variable
  // .? - used to access the properties of a null variable
  List<String>? names = ['Foo'];
  // names = null; // with this on board getting an error is obvious
  names = getList();
  print(names); // names = [a,b]
  if (names != null) // now becomes a working line of code
    final sizeOfString = names.length; // runtime constant
  else
    final SizeofString = 0;
  // if the list is null then the error is obvious but it would give an error if the list gets defined dynamically by some function or something because there is a chance the list could be null
  // although if the return type of the function was non nullable then no error
  // when names is null then definetely the property could not be accessed as the reciever is null
  // const sizeOfString = names.length; // compiletime constant error
// a better way of doing what we did above is using ?.operator
  final length =
      name?.length ?? 0; // taking the first non null value there can be
}

// Enumeration : named list of related item
enum PersonProperties {
  firstName,
  lastName,
  age;
}

enum AnimalType { cat, dog, mouse }

void testEnum(AnimalType animalType) {
  /*print(PersonProperties.values); // prints all
  print(PersonProperties.firstname); // prints firstname
  */
  switch (animalType) {
    case AnimalType.cat:
      print("I love cats");
      break;
    case AnimalType.dog:
      print("Bhao Bhao");
      break;
    case AnimalType.mouse:
      print("mousie");
      break;
    default:
      print("Well who gives a fuck");
      print("Function is finished");
  }
}

class Person {
  String firstName, lastName; // error code line ;
  Person(this.firstName,
      this.lastName); // solves the error by creating a constructor
  // the presence of uninstantiated variable name makes it impossible to have an empty constructor in this case
  /* Person(this.name) {
    print('Hello');
   }*/
// seems like constructors in dart are a mixture of both cpp and java

  void run() {
    print("I am running");
  }

  void breathe() {
    print("Well I am breathing");
  }
}

// abstract class is a class whose sole purpose is to be extended by a derived class
abstract class LivingThing {
  void breathe() {
    print("All living things breathe");
  }

  void move() {
    print("Every living thing is moving ");
  }

  // abstract void fun();members of the class cannot be declared to be abstract , well different from java
}

class Cat extends LivingThing {
  final String name;
  Cat(this.name);
  // the need of factory constructor arises when you have to say assign the same name to 50 other objects
  // a factory constructor can return instances that are not from the same class
  factory Cat.fluffball() {
    return Cat("Fluffball");
  }
  // we could do something else too like
  factory Cat.chillPill() {
    return Cat("Human");
  }
  // Use the factory keyword to define a factory constructor that returns an instance of the class (or its subclass).
  // very useful for data parsing json parsing etc

  // all classes extend object class
  @override
  // bool operator ==(covariant Cat other) => other.name == name;
  bool operator ==(covariant Cat other) {
    return other.name == name;
    // the line above and below are the same
  }

  // covariant keyword is here to tell that in the defination of operator == we don't need other to be of type object rather we want it to be of type Cat
  @override
  // TODO: implement hashCode
  int get hashCode => name.hashCode;
  // we are saying that instead of getting the hascode of the superclass rather get hashcode of name only

  // @override
  // int get hashCode => name.hashCode;
  // //
}

void testClass() {
  // MyClass object = MyClass();
  // did not need to go through this
  // this is enough
  // final object = Person("Foo Bar");
  // object.breathe();
  // final kitty = new Cat('fluffball');
  // kitty.breathe();
  // print(kitty.name);
  final cat1 = Cat("Billi");
  final cat2 = Cat("Billi");
  if (cat1 == cat2)
    print("Equal");
  else
    print("Not equal");
  // priniting not equal as the objects are different
}

extension Run on Cat {
  void run() {
    print("Cat $name is running");
  }
} // Run is the name of extension

extension Fullname on Person {
  String get fullname => '$firstName $lastName';
  // a getter which actually returns us something
}
// Synchronous Task - happens that very moment ,i.e the results are returned immediately
// Asynchronous - not immedietly

// Future- deals with asychronous progrmaming , data to be returned in future
Future<int> heavyFutureThatMultipliesByTwo(int a) {
  // return a*2 ;// as the function is asynchronous and return a returns a value that very moment that is why there is an error
  return Future.delayed(const Duration(minutes: 3), () => a * 2);
  // ()=> something seems much like a lamda fucntion in cpp i.e an inline function
  // Duration is a class
  // async - a keyword that marks a function as asynchronous i.e does something that is delayed
}

// Streams  - An asynchronous 'pipe' of data
Stream<String> getName() {
  return Stream.value('Foo');
  // return Stream.periodic(const Duration(seconds: 1), (value) {
  //   print("Hello");
  //   return 'Foo';
  // });
}

// generators are something similar to a list but not packaged and calculated on the go
// Generators : for generating iterables marked with sync and async
/*List<int> getOneTwoThree() {
  return [1, 2, 3];
}

Iterable<int> getOneTwo() {
  return {1, 2, 3};
}*/ // becomes nearly same as list
Iterable<int> getOneTwo() sync* {
  // return [1, 2, 3];//not allowed
  // so now as you are using sync and async so we need to calculate it on the go that is generate it on the go
  yield 1;
  yield 2;
  yield 3;
}

Stream<Iterable<int>> getOneTwoThree() async* {
  yield [1];
  yield [2];
  yield [3];
} // asynchronous you have to study by yourself

//Generics - something like template in cpp
// class Pair {
//   final String value1;
//   final String value2;
//   Pair(this.value1, this.value2);
// } // for integer and all you have to write the same over and over again , why so much hardwork

class Pair<A, B> {
  final A value1;
  final B value2;
  Pair(this.value1, this.value2);
} // this is how list and vector like things are created

void advanceDart() async {
  // // Extensions - adding logic to existing class
  // final meow = Cat("Billi");
  // print(meow.name);
  // meow.run(); // Extension are a great tool to add functionalities to an existing class
  // Person p = Person('Foo', 'Bar');
  // print(p.fullname);

  // // print(heavyFutureThatMultipliesByTwo(20));// prints a line Instance of Future <int>
  // // we have to use await keyword here - makes it wait for the result of the fucntion on this line and then goes to the next line
  // final result = await heavyFutureThatMultipliesByTwo(
  //     20); // error unless you make the function inside which we are doing this all async
  // print(result);
  // // await for (final value in getName()) {
  // //   print(value);
  // // }
  print('Value:');
  print(getOneTwo());
  for (var value in getOneTwo()) {
    print('value:$value');
  }
  // generating fucntions are lazy doing it one by one
  print(getOneTwoThree());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    advanceDart();
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        // This is the theme of your application.
        //
        // Try running your application with "flutter run". You'll see the
        // application has a blue toolbar. Then, without quitting the app, try
        // changing the primarySwatch below to Colors.green and then invoke
        // "hot reload" (press "r" in the console where you ran "flutter run",
        // or simply save your changes to "hot reload" in a Flutter IDE).
        // Notice that the counter didn't reset back to zero; the application
        // is not restarted.
        primarySwatch: Colors.blue,
      ),
      home: const MyHomePage(title: 'Flutter Demo Home Page'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});

  // This widget is the home page of your application. It is stateful, meaning
  // that it has a State object (defined below) that contains fields that affect
  // how it looks.

  // This class is the configuration for the state. It holds the values (in this
  // case the title) provided by the parent (in this case the App widget) and
  // used by the build method of the State. Fields in a Widget subclass are
  // always marked "final".

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  int _counter = 0;

  void _incrementCounter() {
    setState(() {
      // This call to setState tells the Flutter framework that something has
      // changed in this State, which causes it to rerun the build method below
      // so that the display can reflect the updated values. If we changed
      // _counter without calling setState(), then the build method would not be
      // called again, and so nothing would appear to happen.
      _counter++;
    });
  }

  @override
  Widget build(BuildContext context) {
    // This method is rerun every time setState is called, for instance as done
    // by the _incrementCounter method above.
    //
    // The Flutter framework has been optimized to make rerunning build methods
    // fast, so that you can just rebuild anything that needs updating rather
    // than having to individually change instances of widgets.
    return Scaffold(
      appBar: AppBar(
        // Here we take the value from the MyHomePage object that was created by
        // the App.build method, and use it to set our appbar title.
        title: Text(widget.title),
      ),
      body: Center(
        // Center is a layout widget. It takes a single child and positions it
        // in the middle of the parent.
        child: Column(
          // Column is also a layout widget. It takes a list of children and
          // arranges them vertically. By default, it sizes itself to fit its
          // children horizontally, and tries to be as tall as its parent.
          //
          // Invoke "debug painting" (press "p" in the console, choose the
          // "Toggle Debug Paint" action from the Flutter Inspector in Android
          // Studio, or the "Toggle Debug Paint" command in Visual Studio Code)
          // to see the wireframe for each widget.
          //
          // Column has various properties to control how it sizes itself and
          // how it positions its children. Here we use mainAxisAlignment to
          // center the children vertically; the main axis here is the vertical
          // axis because Columns are vertical (the cross axis would be
          // horizontal).
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            const Text(
              'You have pushed the button this many times:',
            ),
            Text(
              '$_counter',
              style: Theme.of(context).textTheme.headline4,
            ),
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: _incrementCounter,
        tooltip: 'Increment',
        child: const Icon(Icons.add),
      ), // This trailing comma makes auto-formatting nicer for build methods.
    );
  }
}
