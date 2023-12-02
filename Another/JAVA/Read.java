import java.util.Scanner;
import java.io.*;


public class Read{
	public static void main(String args[]) {
		
		try{

			String input = "";
			String value[] = new String[3];
			int number = 3;			

	
			File f = new File("E:\");
			Scanner v = new Scanner(f);

			while(v.hasNext()) {
				input = v.nextLine();
				value = input.split(" ", 3);
				
				System.out.print(value[0]+ " ");
				System.out.print(value[1]+ " ");
				System.out.println(value[2]);
			}  
				v.close(); 

		}catch(FileNotFoundException e) {
				System.out.println("File not Found!");
		}
	}	
}