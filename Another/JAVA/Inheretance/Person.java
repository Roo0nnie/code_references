import java.util.Scanner;

public class Person {
	public static void main(String args[]) {
		
		Scanner scan = new Scanner(System.in);
		Human obj = new Human();
		
		System.out.print("Enter you name: ");
		obj.setName(scan.nextLine());
		
		System.out.println("Name: "+obj.getName());
	}
}