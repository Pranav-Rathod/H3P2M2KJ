import java.net.*;

public class Reciver
{
    public static void main(String[] args) throws Exception
    {
        DatagramSocket ds = new DatagramSocket(3000);
        byte [] buf = new byte[100];
         
        DatagramPacket dp = new DatagramPacket(buf, 100);

        ds.receive(dp); 
        String str = new String(dp.getData(), 0, dp.getLength()); 

        int carcount =0,digcount = 0; 
        for(int i=0 ; i<str.length() ; i++)
        {
            if((str.charAt(i) >= 'a' && str.charAt(i) <= 'z') || (str.charAt(i) >= 'A' && str.charAt(i) <= 'Z'))
            {
                carcount++;
            }
            else if(str.charAt(i) >= '0' && str.charAt(i) <= '9')
            {
                digcount++;
            }
        }

        System.out.println("Characters : " + carcount);
        System.out.println("Digits :" + digcount);

        ds.close();
    }
}