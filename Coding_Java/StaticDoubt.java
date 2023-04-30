class Base {
    static int x = 0;
}
// static blocks are automatically called as soon as class is loaded into the memory
//The runtime system guarantees that static initialization blocks are called in the order that they appear in the source code.
// static class StaticDoubt is not vallid as modifiers are not allowed only access specifiers are allowed
class StaticDoubt  {
	         Base b = new Base();// this line does not work because of being in a global i.e. non static context



   static {
	   System.out.println("This will be printed without main");// would not be printed without main when we are using jdk 1.6 and above while can
	                                                           // be when using jdk below 1.6
	   }// This is the speciality of java which cannot be seen in other languages such as C++ as a static block is created inside the class
   /* public static void main(String args[])
    {
        // Compiler Error: non-static variable
        // cannot be referenced from a static context
        System.out.println(b.x);
        // super and this these objects are globally defined and hence are in a non static frame already
        // every object inside main in java is always static
    }*/
}