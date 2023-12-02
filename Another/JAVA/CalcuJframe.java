/** Maidon Jeho Duran
	BSIT 2C
*/

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class CalcuJframe implements ActionListener{
	
	JButton button0, button1, button2, button3, button4,button5, button6, button7, button8, button9;
	JTextField text = new JTextField();
	
	
	public static void main(String args[]) {
		
		CalcuJframe Calculator = new CalcuJframe();
	}
	
	CalcuJframe() {
		
        // method for JFrame implementation
        JFrame f = new JFrame("Calculator");   
        //f.getContentPane().setBackground(Color.black);
  
               //JLabel - used to display short string or image icon
               JLabel hello = new JLabel("STANDARD CALCULATOR");
               hello.setBounds(5,10,150,10);// position and size of label
               f.add(hello); // required to add the label
               
               //JFRAME visibility
               f.setSize(350,440);//jframe size
               f.setResizable(false);// to resize or not
               f.setLayout(null);// set Jpanel layout
               f.setVisible(true); // frame will be visible
               //f.setDefaultCloseOperation(EXIT_);e;//TERMINATE THE PROGRAM WHEN CLOSE SELECTED
               
               //font              
               Font font = new Font("Serif",Font.BOLD,12);
		
             //TEXTFIELD
               JTextField text = new JTextField();
               text.setBounds(45,50,250,50);
               text.setEditable(false);
               text.setFont(font);
               text.setBackground(Color.white); //color of the button
               text.setBorder(BorderFactory.createLineBorder(Color.black));//color of buttton-border
               f.add(text);
               
		               //buttonCE
		               JButton buttonCE = new JButton("CE");
		               buttonCE.setBounds(10,120,75,50);
		               buttonCE.setBackground(Color.decode("#222736")); //color of the button
		               buttonCE.setForeground(Color.white); // color of the text 
		               buttonCE.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonCE);
		               
		               //buttonC
		               JButton buttonC = new JButton("C");
		               buttonC.setBounds(90,120,75,50);
		               buttonC.setBackground(Color.decode("#222736")); //color of the button
		               buttonC.setForeground(Color.white); // color of the text 
		               buttonC.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonC);
		               
		               //buttonDEL
		               JButton buttonDEL = new JButton("DEL");
		               buttonDEL.setBounds(170,120,75,50);
		               buttonDEL.setBackground(Color.decode("#222736")); //color of the button
		               buttonDEL.setForeground(Color.white); // color of the text 
		               buttonDEL.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonDEL);
		               
		             //buttonDIV
		               JButton buttonDIV = new JButton("÷");
		               buttonDIV.setBounds(250,120,75,50);
		               buttonDIV.setBackground(Color.decode("#222736")); //color of the button
		               buttonDIV.setForeground(Color.white); // color of the text 
		               buttonDIV.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonDIV);
		
		             //button7
		               JButton button7 = new JButton("7");
		               button7.setBounds(10,175,75,50);
		               button7.setBackground(Color.gray); //color of the button
		               button7.setForeground(Color.white); // color of the text 
		               button7.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button7);
		               
		               //button8
		               JButton button8 = new JButton("8");
		               button8.setBounds(90,175,75,50);
		               button8.setBackground(Color.gray); //color of the button
		               button8.setForeground(Color.white); // color of the text 
		               button8.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button8);
		               
		               //button9
		               JButton button9 = new JButton("9");
		               button9.setBounds(170,175,75,50);
		               button9.setBackground(Color.gray); //color of the button
		               button9.setForeground(Color.white); // color of the text 
		               button9.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button9);
		               
		             //buttonMPY
		               JButton buttonMPY = new JButton("x");
		               buttonMPY.setBounds(250,175,75,50);
		               buttonMPY.setBackground(Color.decode("#222736")); //color of the button
		               buttonMPY.setForeground(Color.white); // color of the text 
		               buttonMPY.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonMPY);
		               
		             //button4
		               JButton button4 = new JButton("4");
		               button4.setBounds(10,230,75,50);
		               button4.setBackground(Color.gray); //color of the button
		               button4.setForeground(Color.white); // color of the text 
		               button4.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button4);
		               
		               //button5
		               JButton button5 = new JButton("5");
		               button5.setBounds(90,230,75,50);
		               button5.setBackground(Color.gray); //color of the button
		               button5.setForeground(Color.white); // color of the text 
		               button5.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button5);
		               
		               //button6
		               JButton button6 = new JButton("6");
		               button6.setBounds(170,230,75,50);
		               button6.setBackground(Color.gray); //color of the button
		               button6.setForeground(Color.white); // color of the text 
		               button6.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button6);
		               
		             //buttonSUB
		               JButton buttonSUB = new JButton("-");
		               buttonSUB.setBounds(250,230,75,50);
		               buttonSUB.setBackground(Color.decode("#222736")); //color of the button
		               buttonSUB.setForeground(Color.white); // color of the text 
		               buttonSUB.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonSUB);
		               
		             //button1
		               JButton button1 = new JButton("1");
		               button1.setBounds(10,285,75,50);
		               button1.setBackground(Color.gray); //color of the button
		               button1.setForeground(Color.white); // color of the text 
		               button1.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button1);
		               
		               //BUTTON2
		               JButton button2 = new JButton("2");
		               button2.setBounds(90,285,75,50);
		               button2.setBackground(Color.gray); //color of the button
		               button2.setForeground(Color.white); // color of the text 
		               button2.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button2);
		               
		               //button3
		               JButton button3 = new JButton("3");
		               button3.setBounds(170,285,75,50);
		               button3.setBackground(Color.gray); //color of the button
		               button3.setForeground(Color.white); // color of the text 
		               button3.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button3);
		               
		             //buttonADD
		               JButton buttonADD = new JButton("+");
		               buttonADD.setBounds(250,285,75,50);
		               buttonADD.setBackground(Color.decode("#222736")); //color of the button
		               buttonADD.setForeground(Color.white); // color of the text 
		               buttonADD.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonADD);
		               
		               //buttonDEC
		               JButton buttonDEC = new JButton(".");
		               buttonDEC.setBounds(10,340,75,50);
		               buttonDEC.setBackground(Color.decode("#222736")); //color of the button
		               buttonDEC.setForeground(Color.white); // color of the text 
		               buttonDEC.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonDEC);
		               
		               //button0
		               JButton button0 = new JButton("0");
		               button0.setBounds(90,340,75,50);
		               button0.addActionListener(this);
		               button0.setBackground(Color.gray); //color of the button
		               button0.setForeground(Color.white); // color of the text 
		               button0.setBorder(BorderFactory.createLineBorder(Color.white));//color of buttton-border
		               f.add(button0);
		               
		               //buttonMOD
		               JButton buttonMOD = new JButton("%");
		               buttonMOD.setBounds(170,340,75,50);
		               buttonMOD.setBackground(Color.decode("#222736")); //color of the button
		               buttonMOD.setForeground(Color.white); // color of the text 
		               buttonMOD.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonMOD);
		               
		             //buttonEQ
		               JButton buttonEQ = new JButton("=");
		               buttonEQ.setBounds(250,340,75,50);
		               buttonEQ.setBackground(Color.decode("#222736")); //color of the button
		               buttonEQ.setForeground(Color.white); // color of the text 
		               buttonEQ.setBorder(BorderFactory.createLineBorder(Color.gray));//color of buttton-border
		               f.add(buttonEQ);
		               
		               
	}
	
	public void actionPerformed(ActionEvent e) {
		
		if(e.getSource() == button0) {
			text.setText("");
			//place the decimal to the textfield
		}
		}
	
	}


