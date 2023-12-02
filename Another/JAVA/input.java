import java.util.Scanner;
import java.io.*;

public class input {

	public static void main(String[] args) throws FileNotFoundException {
		
		File file = new File("input.in");
		Scanner data_in = new Scanner(file);
		String input = "";
		String value[] = new String[4];
		
		
		String Test = data_in.nextLine();
		int Testcase = Integer.parseInt(Test);
		for(int i=0;i<Testcase;i++) {
			input = data_in.nextLine ();
			value = input.split(" ", 4);
			
			int D = Integer.parseInt(value[0]);
			int d = Integer.parseInt(value[1]);
			int p = Integer.parseInt(value[2]);
			int q = Integer.parseInt(value[3]);
				
			int n = D/d;
			int sol = 0;
			
			sol =n*p*d + q*d*(n*(n-1))/2 + (D%d) * (p+n*q);
			System.out.println(sol);
			
		}

	}

}
