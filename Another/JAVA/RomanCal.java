import java.util.Scanner;

public class RomanCal{
	public static void main(String args[]) {
	
	int Add = 0;
	String FirstNum = "";
	
	Scanner scan = new Scanner(System.in);
	
	System.out.println("Enter your 1st number: ");
	FirstNum = scan.nextLine();
	
	if(Character.isDigit(FirstNum.charAt(0)) == true) {
		System.out.println("Number");
	} else {
		System.out.println("Character");
	}
	
	}

}