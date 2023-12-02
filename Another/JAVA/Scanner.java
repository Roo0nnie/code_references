import java.util.Scanner;

public class Scanner {
	public static void main(String[] args) {
		
		Scanner Scan = new Scanner(System.in);
		
		System.out.println("Enter your name: ");
		String name = Scan.nextLine();

		System.out.println("Enter your surname: ");
		String surname = Scan.nextLine();
		
		System.out.println(name +" "+ surname);		
		
	}

}