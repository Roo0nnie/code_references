import java.io.IOException;
import java.io.File;
import java.util.Scanner;

public class YourNameIsMine {

	public static void main(String[] args) {
		
	try {
		int Testcase = 0, i = 0;
		String Input = "";
		String value[] = new String[2];
		String Store[] = new String[100];
		
		File file = new File("input.in");
		Scanner Scan = new Scanner(file);
		
		System.out.println("Input:");
		System.out.println();
		
		System.out.println("Enter a number of test case:");
		Testcase = Scan.nextInt();
	
		
	}catch(Exception e) {
		System.out.println("File Not Found!");
	}
		
	}

}
