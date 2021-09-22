
import streamingexception.*;

public class Subscription {
    
    void checkAge(int age , String rating) throws NotApplicableForKids 
    {
      
            if(age < 18 && rating.equals("R")){
                throw new NotApplicableForKids("Not applicable for people under 18");
            }
            else if (age < 15 && rating.equals("M")){
                throw new NotApplicableForKids("Not applicable for people under 15");
            }
            else if (age < 18 && (rating.equals("G") || rating.equals("PG") ) ){
                System.out.println("Applicable for kids");
            }
    }

   void buySubscription(String cardNo, String type ,double fee)
    {   

            if (cardNo.length() == 16 && (type.equals("Mastercard") || type.equals("Visa"))){
                System.out.println("giving 2.9% concession ");
                System.out.println("Final fee is " + (fee- (fee*.029)));
            }
            else
            throw new CardNotWorkingException("Invalid card");
    

    }
}
