import java.util.Scanner;

public class ReportMethod {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);	
		NewClass obj = new NewClass();
	
		System.out.println("Enter your name: ");
		obj.setName(scan.nextLine());

		System.out.println("Name: " +obj.getName());
	}
}