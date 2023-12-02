/**
 * Ronnie F. Estillero
 * BSIT 2A                  Object Oriented Programming
 * 
 * Good afternoon sir, sa example po na binigay niyo parang may mali po....kasi sa tanong po is "Kung sino ang mas mabilis, iprint ang
 * pangalan". Example don sa example na binigay niyo po..ang A,X kay Dominic and B,Y kay Brian.
 * 
 * A X B Y          A, B = represent distance       X,Y = represent time
 * 20 6 20 5 
 * 
 * ang formula po para malaman kung sino ang mabilis gamit ang distansya and oras.
 * Formula:
 *      Speed = Distance / Time
 *      
 * case1: Dominic (A, X);                               case2: Brian
 *          Speed = Distance / Time                         Speed = Distance / Time 
 *          Speed = A / X                                   Speed = A / X
 *          Speed = 20 / 6                                  Speed = 20 / 5
 *          Speed = 3.33                                    Speed = 4
 * 
 * So, ang conclusion ko po is dapat don sa una na iprint ay si Brian, Equal, and Dominic...and so on.
 */
import java.io.File;
import java.util.Scanner;
import java.io.IOException;

class Main
{
	public static void main(String[] args) {
	    		try {
			String read = "";
			int num1,num2,num3,num4, Dominic,Brian;
			int x = 0,Testcase;
			String[] value = new String[4];
			String[] Sub = new String[100];
			
			Scanner scan = new Scanner(System.in);
			File file = new File("input.in");
			
			Scanner dataIn = new Scanner(file);
			
			System.out.println("Input:");
			System.out.println();
			
			System.out.println("Enter a number of test case:");
			Testcase = scan.nextInt();
			
			for(x=1;x<=Testcase;x++) {
					read = dataIn.nextLine();
					value = read.split(" ", 4);
					
					num1 = Integer.parseInt(value[0]);
					num2 = Integer.parseInt(value[1]);
					num3 = Integer.parseInt(value[2]);
					num4 = Integer.parseInt(value[3]);
					
					Dominic = num1 / num2;
					Brian = num3 / num4;
					
					
					if(Dominic > Brian) {
						Sub[x] = "Dominic";
					} else if (Dominic < Brian){
						Sub[x] = "Brian";
					} else {
						Sub[x] = "EQUAL"; 
					}
					
					System.out.println(num1+" "+num2+" "+num3+" "+num4);
			}
			System.out.println("Output:");
			for(x=1;x<=Testcase;x++) {
				System.out.println(Sub[x]);
			}
			
			
			
		} catch(Exception e) {
			System.out.println("Error!");
		}
	}
}