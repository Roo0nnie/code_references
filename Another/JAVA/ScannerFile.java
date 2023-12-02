import java.io.FileNotFoundException;
import java.io.File;
import java.util.Scanner;

public class ScannerFile {

	public static void main(String[] args) throws FileNotFoundException {
		
		File file = new File("Input.txt");
		Scanner Scan = new Scanner(file);
		String Line = "";
		int i = 0;
		int j = 0;
		int add;
		String value[] = new String[100];
	
		while(Scan.hasNext()) {
			value[i] = Scan.nextLine();
			i += 1;
		}	System.out.println("Output:");
			for(j = 0;j<i;j++) {
			add = 1+j;
			System.out.println("Line "+ add +" - " +value[j] );
		}
		
	}

}
