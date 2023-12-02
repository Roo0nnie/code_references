
import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.File;

public class MoneyHeist {

	public static void main(String[] args) throws FileNotFoundException {
		
			
			File file = new File("input.in");
			Scanner data_in = new Scanner(file);
			String value[] = new String[4];
			
			int Testcase = data_in.nextInt();
			for(int i=0; i<Testcase; i++) {
				String input = data_in.nextLine();
				value = input.split(" ", 4);
				
				int NoDays = Integer.parseInt(value[0]);
				int Days = Integer.parseInt(value[1]);
				int Dollar = Integer.parseInt(value[2]);
				int Rate = Integer.parseInt(value[3]);
				
				int divide = NoDays/Days;
				
				int sum = divide*Dollar*Days + Rate*Days*(divide*(divide-1))/2 + (NoDays%Days) * (Dollar + divide*Rate); 
				System.out.println(sum);
				}
					
	}
}

		
		
		

