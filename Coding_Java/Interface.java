// One class can only extend to one but can implement n number of interfaces
// classes cannot be implemented only interfaces can be
// abstract methods inside the interface need not be defined inside some subclasses but they need to be defined so as to make them useful
// Interface is an abstract class defined under the interface keyword
interface It1 {

	public void add();
	public void sub();  //Inside an interface all functions should be abstract
	public void mul();
	public void div();


	}
/// When you are writing implement you have to implement all abstract methods inside the interface
// If you do not want to implement all abstract methods from the interface then make the class abstract and then overwrite the abstract method in coming child class
class ItTest implements It1{
	    public void add(){};
		public void sub(){};
		public void mul(){};
		public void div(){};

	}


abstract class Itt implements It1{
	public void add(){};
	public void sub(){};

	// had we not defined the class with abstract keyword then it would have gave an error and now we need to overwrite the funtion in child class
	}

