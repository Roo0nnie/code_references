import java.io.*;

public class BufferedReaderBinary {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));
		
		String name ="";
		int numb = 0;
		int numb1[] = new int[10];
		int i=0;

		try{
			System.out.println("Enter number to be converted: ");
			name = dataIn.readLine();
			numb = Integer.parseInt(name);
			
			for(i=0; numb>0; i++) {
				numb1[i] = numb%2;
				numb = numb/2;	
			}
			System.out.print("Converted to binary: ");
			for(i=i-1;i>=0;i--) {
				System.out.print(numb1[i]);
			}
		}catch(IOException e) {
			System.out.println("Error!");	
		}	
	}
}