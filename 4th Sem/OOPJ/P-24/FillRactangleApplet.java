import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

public class FillRactangleApplet extends Applet
{
    public void paint(Graphics s)
    {
        int width=20;
        s.setColor(Color.green);
        s.drawRect(100, 100, 200, 50);
      
        for(int i=1 ; i<=10 ; i++)
        {
            try
            {
                Thread.sleep(1000);
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
            s.fillRect(100, 100, width, 50);
            width += 20;
        }
    }
}