package prog_3;

class ClsB extends ClsA{
	private int c = 5;
	protected int d = 6;
	
	ClsB() {
		System.out.println("Inside default class 'ClsB'");
		System.out.println("This class is inherited from ClsA");
		System.out.println("Variables in this class are " + c + "&"+d);
	}
}


//private class ClsC  extends ClsB{
//	private int e = 4;
//	public int f = 3;
//	
//	ClsC() {
//		System.out.println("Inside inheirted class");
//		System.out.println("Protected variable is " + b);
//		System.out.println("Private variable cant be called as it is in another class");
//	}
//}
//
//protected class ClsD {
//	public int g,h;
//}


public class AccessModifiers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ClsA a = new ClsA();
		ClsB b = new ClsB();
//		ClsC c = new ClsC();
//		ClsD d = new ClsD();
	}

}
