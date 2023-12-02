import java.io.*;

public class BufferredReaderInput{
	public static void main(String args[]){
		
		BufferredReader dataIn = new BufferredReader(new InputStreamReader(System.in));

		String name = "";

		System.out.println("Enter your name: ");

		try{
			name = dataIn.readLine();

		}catch() {
			System.out.println("Error");
		}
	}

		System.out.println("Hello" + name);

}