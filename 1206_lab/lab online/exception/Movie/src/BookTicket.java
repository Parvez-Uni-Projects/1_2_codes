
import movieexception.*;

public class BookTicket extends Eligibility {

    public void addCard(String cardNo)
    {
        if (cardNo.length() < 16  || cardNo.contains(" "))
        {
            throw new CardNotWorkingException("Invalid card");
        }
        else 
        {
            System.out.println("Card Is valid");
        }
    }
    
}
