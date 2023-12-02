import java.io.*;

public class BufferredReader{
	public static void main(String args[]){
		
		BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));

		String name = "";

		System.out.println("Enter your name: ");

		try{
			name = dataIn.readLine();

		}catch(IOException e) {
			System.out.println("Error");
		}
	}

		System.out.println("Hello" + name);

}