import javax.swing.JOptionPane;

public class Estillero_Ronnie_Binary_JOption {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String name = "";
		int decimal = 0, i=0;
		String binary = "";
		
		name = JOptionPane.showInputDialog("Enter decimal: ");
		decimal = Integer.parseInt(name);
		
		for(;decimal!=0; decimal=decimal/2) {
			binary=decimal % 2 + binary;
		}
			String message = "Binary: " + binary;
			JOptionPane.showMessageDialog(null, message);
	}
}
