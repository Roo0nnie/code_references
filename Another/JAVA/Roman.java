import java.util.InputMismatchException;
import java.util.Scanner;

public class Roman {

	public static void main(String[] args) throws InputMismatchException{
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter a number to convert into Roman Numerals: ");
		int num1 =	scan.nextInt();
		
		while(num1 != 0) {
			if(num1 >= 1000) {
				System.out.print("M");
				num1 -= 1000;
			}else if(num1 >= 900) {
				System.out.print("CM");
				num1 -= 900;
			}else if(num1 >= 500) {
				System.out.print("D");
				num1 -= 500;	
			}else if(num1 >= 400) {
				System.out.print("CD");
				num1 -= 400;	
			}else if(num1 >= 100) {
				System.out.print("C");
				num1 -= 100;	
			}else if(num1 >= 90) {
				System.out.print("XC");
				num1 -= 90;	
			}else if(num1 >= 50) {
				System.out.print("L");
				num1 -= 10;	
			}else if(num1 >= 40) {
				System.out.print("XL");
				num1 -= 40;	
			}else if(num1 >= 10) {
				System.out.print("X");
				num1 -= 10;	
			}else if(num1 >= 9) {
				System.out.print("IX");
				num1 -= 9;	
			}else if(num1 >= 5) {
				System.out.print("V");
				num1 -= 5;	
			}else if(num1 >= 4) {
				System.out.print("IV");
				num1 -= 4;	
			} else {
				System.out.print("I");
				num1 -= 1;				
			}
		}
	}
}
