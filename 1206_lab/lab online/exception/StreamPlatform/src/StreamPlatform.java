import streamingexception.*;

public class StreamPlatform {
    public static void main(String[] args) {
      
        Subscription subObj = new Subscription();

        try {
            subObj.checkAge(12,"R");
            
        } catch (NotApplicableForKids e) {
            System.out.println(e);  
        }

        
        try {
            subObj.buySubscription("11111111111111","Visa",50);
            
        } catch (CardNotWorkingException e) {
            System.out.println(e);  
        }
        
        
    }
}
