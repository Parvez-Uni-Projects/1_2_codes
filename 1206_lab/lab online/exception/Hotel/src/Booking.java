
import hotelexception.*;

public class Booking {
   
    void checkID (String ID , String  Category)
    {
        try {
            if(Category.equals("passport") && ID.length() != 9  )
            {
                throw new IDNumberInvalidException("Passport number is invalid");
            }
            else if (Category.equals("nid" ) && ID.length() != 10 )
            {
                throw new IDNumberInvalidException("NID is invalid");
            }
            else
            {
                System.out.println("ID is valid");   
            }

        } catch (IDNumberInvalidException e) {
            System.out.println("Exception " + e);
        }
    }

    void giveDiscount (int age , double roomRate)
    {
        try {
            if(age >= 60 || age <= 10)
        {
            System.out.println("Giving 7.9 % Disocunt ");
            System.out.println("Final room rate is " + (roomRate - (roomRate*.079)));
        }
        else 
        {
            throw new NotApplicableForDiscountException("Age group is not included in disocunt offer");
        }    
        } catch (NotApplicableForDiscountException e) {
            System.out.println("Exception is " + e);
            
        } 
    }

   
}



