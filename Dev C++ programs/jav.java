import java.util.scanner;

class dara {
     public static void main( string args [])
	 {
		scanner fem = new scanner (system.in);
		double fnum, snum, answer;
		system.out.print("Enter the first number: ");
		fnum = fem.nextDouble();
		system.out.print("Enter the second number: ");
		snum = fem.nextDouble();
		answer = fnum + snum;
		system.out.println(answer);
	 }

}