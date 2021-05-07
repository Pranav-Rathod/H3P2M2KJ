import java.applet.Applet;
import java.awt.*;

/*<applet code="CircleUsingApplet" width=500 height=300>
</applet>*/

public class CircleUsingApplet extends Applet
{
    public void paint(Graphics g)
    {
        g.drawOval(150,50,200,200);
        g.drawString("Marwadi University",200,160);

        // g.drawOval(150,50,200,200);
        // g.drawString("Marwadi University",235,150);
    }
}