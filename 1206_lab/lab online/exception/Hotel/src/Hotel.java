import hotelexception.*;
public class Hotel {
    public static void main(String[] args) {

        Booking bookObj = new Booking();

        try {
             bookObj.checkID("1234", "passport");
            
        } catch (IDNumberInvalidException e) {
            System.out.println(e);
        }

         try {
            bookObj.giveDiscount(10,30);
            
        } catch (NotApplicableForDiscountException e) {
            System.out.println(e);  
        }
    
    }
}
