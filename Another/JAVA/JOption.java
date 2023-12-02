import javax.swing.JOptionPane;

public class JOption {

	public static void main(String[] args) {
		
		String Math = JOptionPane.showInputDialog("Math: ");
		double math = Double.parseDouble(Math);
		
		String Science = JOptionPane.showInputDialog("Science: ");
		double science = Double.parseDouble(Science);
		
		String English = JOptionPane.showInputDialog("English: ");
		double english = Double.parseDouble(English);
		
		double average = (english + science + math) / 3;
		
		if(average >= 75) {
			String message = "Pass: "+average;
			JOptionPane.showMessageDialog(null, message );
		} else {
			String message = "Fail: "+average;
			JOptionPane.showMessageDialog(null, message );
		}
		
		String message = "Average: " + average;
		
		

	}

}
