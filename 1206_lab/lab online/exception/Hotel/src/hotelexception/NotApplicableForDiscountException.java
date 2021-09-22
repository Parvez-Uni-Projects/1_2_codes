package hotelexception;

public class NotApplicableForDiscountException extends RuntimeException{
    
    public NotApplicableForDiscountException( String message){
        super(message);
    }
    
}
