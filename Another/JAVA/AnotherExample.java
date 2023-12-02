import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.InputMismatchException;

public class AnotherExample {

	public static void main(String[] args) throws FileNotFoundException {
		
		try {	
			String[] storage = new String[100];
			int count=0;
			int add = 0;
			String data_in = "";
			String value[] = new String[2];
			File file = new File("input.in");
			Scanner scan = new Scanner(file);
			Scanner input = new Scanner(System.in);
			
			System.out.println("Enter a number of testcase: ");
			int testcase = input.nextInt();
			
			for(int i = 0; i < testcase; i++) {
				data_in = scan.nextLine();
				value = data_in.split(" ", 2);

				int size_value0 = value[0].length();
				int size_value1 = value[1].length();
				
				for(int j = 0; j < size_value0; j++) {
					for(int k = 0; k < size_value1; k++) {
						if(value[0].charAt(j) == value[1].charAt(k)) {
							count = count + 1;
						}
						}if(count > 0) {
							add = add + 1;
							count = 0;
						}	
					}
					if(add == size_value0) {
						storage[i] = "YES";
					} else {
						storage[i] = "NO";
					}	
					add = 0;
					System.out.println(value[0] +" "+value[1]);
				}
				System.out.println();
				System.out.println("Output:");
				for(int l = 0; l < testcase; l++) {
					System.out.println(storage[l]);
				}
		}catch(InputMismatchException e) {
			System.out.println("Input an integer value.");
			
		}
		
	
		
	}

}
