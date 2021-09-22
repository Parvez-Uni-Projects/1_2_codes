
import connections.*;

import connections2.ConnectionIP2;

public class App {
    public static void main(String[] args) throws Exception {
        //System.out.println("Hello, World!");


        ConnectionsDB dObj =new ConnectionsDB();

        ConnectionIP2 obj2 = new ConnectionIP2();

        connections3.connectionHum obj3 = new connections3.connectionHum();

        

        dObj.disconnect();

        obj2.disconnect();

        obj3.win();
    }
}
