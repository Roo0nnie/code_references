import java.io.*;


public class Estillero_Ronnie_Area_Perimeter_Buffered {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));
			
			String input = "";
			double raduis = 0,area = 0,pi = 3.14, perimeter = 0;
			
			try {
				System.out.print("Enter a radius: ");
				input = dataIn.readLine();
				raduis = Double.parseDouble(input);
				
				area = (pi * (raduis * raduis));
				perimeter = (2 * (pi * raduis));
				
				System.out.println();
				System.out.println("Area: " +area);
				System.out.println("Perimeter: " +perimeter);
				
			}catch(IOException e) {
				System.out.println("Error!");
			}	
			
	}

}
