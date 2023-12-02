import java.io.FileNotFoundException;
import java.io.File;
import java.util.Scanner;

public class Marriages {

	public static void main(String[] args) throws FileNotFoundException {
		
		File file = new File("input.in");
		Scanner Scan = new Scanner(file);
		Scanner dataIn = new Scanner(System.in);
		String input = "";
		int Testcase = 0;
		int i = 0;
		String value[] = new String[2];
		String Store[] = new String[100];
		
		System.out.println("Input:");
		System.out.println();
		
		System.out.println("Enter a number of test case: ");
		Testcase = dataIn.nextInt();
		
		
		for(i = 0; i < Testcase; i++) {
			input = Scan.nextLine();
			value = input.split(" ", 2);
			
			if(value[0].subSequence(0, 3).equals(value[1].subSequence(0, 3))) {
				Store[i] = "YES";
			}
			else {
				Store[i] = "NO";
			}
			System.out.println(value[0]+" "+value[1]);
			
		}System.out.println();
		System.out.println("Output:");
		for(i=0;i<Testcase;i++) {
			System.out.println(Store[i]);
		}
	}
}
