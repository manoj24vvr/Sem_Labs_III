package prog_3;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
  
public class swing{
	public static void main(String[] args){
		Frame f = new Frame();
		final TextField txt=new TextField();
		txt.setBounds(50,50,150,20);
		txt.setText("HELLO WORLD");
		Button b1=new Button("Click Here");
		b1.setBounds(80,80,60,30);
		b1.addActionListener(new ActionListener(){
			public void actionPerformed (ActionEvent e){
				
				JFrame frame = new JFrame("Hello world swing");
				frame.setMinimumSize(new Dimension(250, 250));
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				JLabel lblText = new JLabel("BEAUTIFUL WORLD", SwingConstants.CENTER);
				JButton b2 = new JButton("OK");
				b2.setBounds(80,120,60,40);
				frame.add(b2);
				frame.getContentPane().add(lblText);
				frame.pack();
				frame.setVisible(true);
				}
			});
		f.add(b1);
		f.add(txt);
		f.setSize(300,300);
		f.setLayout(null);
		f.setVisible(true);
	}
}