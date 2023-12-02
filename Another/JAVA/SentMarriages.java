import java.io.FileNotFoundException;
import java.io.File;
import java.util.Scanner;

public class SentMarriages {

	public static void main(String[] args) throws FileNotFoundException {
		
		int TC = 0,i;
		String N = "";
		String name[] = new String[2];
		
		File f = new File("input.in");
		Scanner In = new Scanner(f);
		
		N = In.nextLine();
		TC = Integer.parseInt(N);
		
		for(i = 0; i <TC; i++) {
			N = In.nextLine();
			name = N.split(" ", 2);
			
			if(name[0].substring(0,3).equals(name[1].substring(0,3))) {
				System.out.println("YES");
			}
			else {
				System.out.println("NO");
			}
		}
		

	}

}
