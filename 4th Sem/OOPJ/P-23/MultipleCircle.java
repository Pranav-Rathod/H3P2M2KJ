import java.applet.Applet;
import java.awt.*;

/*
<applet code="MultipleCircle" width="500" height="400"></applet>
*/

public class MultipleCircle extends Applet
{
    public void paint(Graphics g)
    {
        for(int i=0;i<10;i++)
        {
            g.setColor(Color.red);
            setSize(250,500);
            g.fillOval(110, i*50, 40, 40);
        }  
    }
}