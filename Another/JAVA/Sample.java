import java.util.Scanner;

public class Sample{
	public static void main(String arg[]) {
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter your name: ");
		String name = scan.nextLine();
		System.out.print("Enter your age: ");
		int age = scan.nextInt();
		
		System.out.print("Your name is: " +name+ " "+"and age of "+age+".");		
	}
}