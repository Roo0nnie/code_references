import javax.swing.*;
import java.awt.event.*;


public class JavaGui {

	public static void main(String[] args) {
		JFrame frame = new JFrame("This is my first frame");
			JLabel User = new JLabel("Username");
			JLabel Pass = new JLabel("Password");
			JTextField txtuser = new JTextField("username");
			JTextField txtpass = new JTextField("password");
			JButton Login = new JButton("OK");
			
			User.setBounds(30, 100, 150, 20);
			Pass.setBounds(30, 130, 150, 20);
			txtuser.setBounds(100, 100, 150, 20);
			txtpass.setBounds(100, 130, 150, 20);
			Login.setBounds(160, 160, 90, 30);
			
			frame.add(User);
			frame.add(Pass);
			frame.add(Login);
			frame.add(txtuser);
			frame.add(txtpass);
			
			frame.setSize(300, 300);
			frame.setLayout(null);
			frame.setVisible(true);
			frame.setResizable(false);
			
	Login.addActionListener(new ActionListener() {
		public void actionPerformed(ActionEvent e) {
			
			String message = "The sum is :" + (Integer.parseInt(txtuser.getText()) + Integer.parseInt(txtpass.getText())); 
			JOptionPane.showMessageDialog(null, message);

		}
	});
				
	}

}
