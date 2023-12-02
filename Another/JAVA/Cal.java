/** Maidon Jeho Duran
	BSIT 2C
*/

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class Cal implements ActionListener{

	
	//Variables declaration.
	JFrame f; 
	JTextField text;
	JButton[] buttons = new JButton[10];
	JButton[] functionButtons = new JButton[10];
	JButton buttonADD, buttonCE,buttonC,buttonDEL, buttonEQ;
	JButton buttonPERCENT,buttonDEC,buttonSUB, buttonMPY,buttonDIV;
	JPanel panel;
	JLabel hello;
	
	Font font = new Font("Serif",Font.BOLD,12);
	double num1 =0, num2=0, result=0;
	char operator;
	
	public static void main(String[] args) {

		Cal Calculator = new Cal();
	}
	
		Cal() {
			
	        f = new JFrame("Calculator");   
	       
	        hello = new JLabel("STANDARD CALCULATOR");
	        hello.setBounds(5,10,150,10);
	        f.add(hello);
	        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
           
            f.setSize(600,440);
            f.setResizable(false);
            f.setLayout(null);
            f.setVisible(true);
            
    		text = new JTextField();
    		text.setBounds(50,35,250,40);
    		text.setFont(font);
            text.setBackground(Color.white);
            text.setBorder(BorderFactory.createLineBorder(Color.black));
    		text.setEditable(false);
            
    		buttonADD = new JButton("+");
    		buttonSUB = new JButton("-");
    		buttonDIV = new JButton("/");
    		buttonMPY = new JButton("*");
    		buttonDEC = new JButton(".");
    		buttonEQ = new JButton("=");
    		buttonDEL = new JButton("Del");
    		buttonC = new JButton("C");
    		buttonCE = new JButton("CE");
    		buttonPERCENT = new JButton("%");
    	
    		functionButtons[0] = buttonADD;
    		functionButtons[1] = buttonSUB;
    		functionButtons[2] = buttonDIV;
    		functionButtons[3] = buttonMPY;
    		functionButtons[4] = buttonDEC;
    		functionButtons[5] = buttonEQ;
    		functionButtons[6] = buttonC;
    		functionButtons[7] = buttonCE;
    		functionButtons[8] = buttonPERCENT;
    		functionButtons[9] = buttonDEL;
    		
    		for(int i=0;i<10;i++) {
    			functionButtons[i].addActionListener(this);
    			functionButtons[i].setFont(font);
    			functionButtons[i].setFocusable(false);
    			functionButtons[i].setBackground(Color.decode("#222736"));
    			functionButtons[i].setForeground(Color.white); 
    			functionButtons[i].setBorder(BorderFactory.createLineBorder(Color.gray));
    		}
    		for(int i=0;i<10;i++) {
    			buttons[i] = new JButton(String.valueOf(i));
    			buttons[i].addActionListener(this);	
    			buttons[i].setFont(font);
    			buttons[i].setFocusable(false);
	            buttons[i].setBackground(Color.gray);
	            buttons[i].setForeground(Color.white); 
	            buttons[i].setBorder(BorderFactory.createLineBorder(Color.white));
    		}
    		
    		panel = new JPanel();
    		panel.setBounds(10, 95, 318, 300); 
    		panel.setLayout(new GridLayout(5,4,5,5));
    	
    		panel.add(buttonCE);
    		panel.add(buttonC);
    		panel.add(buttonDEL);
    		panel.add(buttonDIV);
    		panel.add(buttons[7]);
    		panel.add(buttons[8]);
    		panel.add(buttons[9]);
    		panel.add(buttonMPY);
    		panel.add(buttons[4]);
    		panel.add(buttons[5]);
    		panel.add(buttons[6]);
    		panel.add(buttonSUB);
    		panel.add(buttons[1]);
    		panel.add(buttons[2]);
    		panel.add(buttons[3]);
    		panel.add(buttonADD);
    		panel.add(buttonDEC);
    		panel.add(buttons[0]);
    		panel.add(buttonPERCENT);
    		panel.add(buttonEQ);
    		
    		f.add(panel);
    		f.add(text);
    		f.setVisible(true);	
		}

	public void actionPerformed(ActionEvent e) {
		
		for(int i=0;i<10;i++) {
			if(e.getSource() == buttons[i]) {
				text.setText(text.getText().concat(String.valueOf(i))); 
			}
		}
		
		if(e.getSource() == buttonDEC) {
			text.setText(text.getText().concat("."));
		}
	
		if(e.getSource() == buttonADD) {
			num1 = Double.parseDouble(text.getText());
			operator = '+';
			text.setText("");
		}
		if(e.getSource() == buttonSUB) {
			num1 = Double.parseDouble(text.getText());
			operator = '-';
			text.setText("");
		}
		if(e.getSource() == buttonMPY) {
			num1 = Double.parseDouble(text.getText());
			operator = '*';
			text.setText("");
		}
		if(e.getSource() == buttonDIV) {
			num1 = Double.parseDouble(text.getText());
			operator = '/';
			text.setText("");
		}
		if(e.getSource() == buttonPERCENT) {
			num1 = Double.parseDouble(text.getText());
			operator = '%';
			text.setText("");
		}
		if(e.getSource() == buttonEQ) {
			num2 = Double.parseDouble(text.getText());
	
			switch(operator) {
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				result = num1 / num2;
				break;
			case '%':
				result = num1 * .01;
				result = result * num2;
				
				break;
			}
			text.setText(String.valueOf(result));
			num1 = result;
		}
		if (e.getSource() == buttonC) {
			text.setText("");
		}
		if (e.getSource() == buttonDEL) {
			String string = text.getText();
			text.setText("");
			for(int i=0;i<string.length()-1;i++) {
				text.setText(text.getText()+string.charAt(i));
			}
		}
		if(e.getSource()== buttonCE) {
			text.setText("");
		}
	}

}
