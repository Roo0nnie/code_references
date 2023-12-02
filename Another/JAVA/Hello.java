import javax.swing.JOptionPane;

public class Hello {
	public static void main(String args[]) {
		
		String name = "";

		name = JOptionPane.showInputDialog("Enter your name: ");
		
		String message = "Hello " + name;		


		JOptionPane.showInputDialog(null, message);
	}	

}