import java.io.*;
import java.io.FileReader;

public class FileRead {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			FileReader reader = new FileReader("Input.txt");
			int data = reader.read();
			
			while(data != -1) {
				System.out.print((char)data);
				data = reader.read();
				
			}reader.close();
			
			
		} catch(IOException e) {
			
		}
	}

}