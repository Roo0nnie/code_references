import java.util.Scanner;

public class RomanToNumber{
	public static void main() {
	
	Scanner scan = new Scanner(System.in);
	
	System.out.println(Enter your 1st number: );
	double num1 = scan.nextDouble();
	
	System.out.println(Enter your 2nd number: );
	double num2 = scan.nextDouble();
	
	int result = num1 + num2;
	System.out.println(result);

	}

}