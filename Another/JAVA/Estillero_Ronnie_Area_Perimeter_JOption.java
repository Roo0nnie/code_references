import javax.swing.JOptionPane;

public class Estillero_Ronnie_Area_Perimeter_JOption{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String name = "";
		double radius = 0, area=0,perimeter=0,pi=3.14;
		
		name = JOptionPane.showInputDialog("Enter radius: ");
		radius = Double.parseDouble(name);
		
		area = (pi * (radius * radius));
		perimeter = (2 * (pi * radius));
		
		String message = "Perimeter: " + perimeter;
		String message1 = "Area " + area;
		
		JOptionPane.showMessageDialog(null, message);
		JOptionPane.showMessageDialog(null, message1);
	}
}