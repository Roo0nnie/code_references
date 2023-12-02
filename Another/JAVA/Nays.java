import java.io.FileNotFoundException;
import java.io.File;
import java.util.Scanner;

public class main {

	public static void main(String[] args) throws FileNotFoundException {
		
		File file = new File("input.in");
		Scanner Scan = new Scanner(file);
		String input = "";
		int Testcase = 0;
		int i = 0;
		String value[] = new String[2];
		
		System.out.println("Input:");
		System.out.println();
		
		System.out.println("Enter a number of test case: ");
		Testcase = Scan.nextInt();
		
		for(i = 0; i <= Testcase; i++) {
			input = Scan.nextLine();
			System.out.println(input);
		}
	}

}
