import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextArea;
 
public class CalculatorApplet
{
    private static JButton[] ab;

    public static void main(String[] args) {
         
        JFrame frame = new JFrame("Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(350, 350);
         
        GridLayout grid = new GridLayout(5, 3, 10, 10);
        frame.setLayout(grid);
         
        JTextArea text = new JTextArea();
        text.setText("Result");
        text.setEditable(false);
        frame.add(text);

        frame.add(new JButton("+"));
        frame.add(new JButton("="));
 
        ab = new JButton[10];
        for(int i=0; i < ab.length; i++)
        {
            ab[i] = new JButton(Integer.toString(i));
            frame.add(ab[i]);
        }
        frame.setVisible(true);
    }
}