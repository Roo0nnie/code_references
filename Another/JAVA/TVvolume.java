import java.io.File;
import java.util.Scanner;
import java.io.IOException;

public class TVvolume {

	public static void main(String[] args) {

		try {
			String read = "";
			int Testcase,num1,num2;
			int x = 0;
			String[] value = new String[2];
			int[] Sub = new int[100];
			
			Scanner scan = new Scanner(System.in);
			File file = new File("Ronnie.in");
			
			Scanner dataIn = new Scanner(file);
			
			System.out.println("Input:");
			
			System.out.println("Enter a number of test case:");
			Testcase = scan.nextInt();
			
			for(x=0;x<Testcase;x++) {
					read = dataIn.nextLine();
					value = read.split(" ", 2);
					
					num1 = Integer.parseInt(value[0]);
					num2 = Integer.parseInt(value[1]);
					
					
					if(num1 >= num2) {
						Sub[x] = num1- num2;
					} else {
						Sub[x] = num2- num1;
					}
					
					System.out.println(num1+" "+num2);
			}
			System.out.println("Output:");
			for(x=0;x<Testcase;x++) {
				System.out.println(Sub[x]);
			}		
		} catch(Exception e) {
			System.out.println("File not Found!");
		}
	}
}