
import hotelexception.*;

public class Booking {
   
    void checkID (String id , String  category) throws IDNumberInvalidException
    {
        
            if(category.equals("passport") && id.length() != 9  )
            {
                throw new IDNumberInvalidException("Passport number is invalid");
            }
            else if (category.equals("nid" ) && id.length() != 10 )
            {
                throw new IDNumberInvalidException("NID is invalid");
            }
            else
            {
                System.out.println("ID is valid");   
            }
    }

    void giveDiscount (int age , double roomRate)
    {
        try {
            if(age >= 60 || age <= 10)
        {
            System.out.println("Giving 12.9 % Discount ");
            System.out.println("Final room rate is " + (roomRate - (roomRate*.129)));
        }
        else 
        {
            throw new NotApplicableForDiscountException("Age group is not included in discount offer");
        }    
        } catch (NotApplicableForDiscountException e) {
            System.out.println("Exception is " + e);
            
        } 
    }

   
}



