import java.io.File;
import java.util.Scanner;
import java.io.FileNotFoundException;

public class AuthorsName {

	public static void main(String[] args) {
		
		try{
			int len = 0;
			String read = "";
			File file = new File("input.in");
			Scanner scan = new Scanner(file);
			String value[] = new String[2];
			
			while(scan.hasNext()) {
				
				read = scan.nextLine();
				value = read.split(" ", 3);
				len = value.length;
				
				if(len == 1) {
					String letter1=value[0].substring(0,1);
					String Capital1 = letter1.toUpperCase();
					String Name1=value[0].substring(1);
					String All1=Name1.toLowerCase();
					System.out.println(Capital1+All1);
					
				} else if(len == 2) {
					String letter1=value[0].substring(0,1);
					String Capital1 = letter1.toUpperCase();
					
					String letter2=value[1].substring(0,1);
					String Capital2 = letter2.toUpperCase();
					String Name2=value[1].substring(1);
					String All2=Name2.toLowerCase();
					System.out.println(Capital1+"." + " "+Capital2+All2);

					
				} else {
					String letter1=value[0].substring(0,1);
					String Capital1 = letter1.toUpperCase();
					
					String letter2=value[1].substring(0,1);
					String Capital2 = letter2.toUpperCase();
					
					String letter3=value[2].substring(0,1);
					String Capital3 = letter3.toUpperCase();
					String Name3=value[2].substring(1);
					String All3=Name3.toLowerCase();
					System.out.println(Capital1+"." + " "+Capital2+"."+" "+Capital3+All3);
				}
			}
			
		}catch(FileNotFoundException e) {
			System.out.println("File Not Found!");
			
		}

	}

}
