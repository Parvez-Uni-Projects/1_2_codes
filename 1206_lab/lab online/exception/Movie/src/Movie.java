import movieexception.*;
public class Movie {
    public static void main(String[] args) {

        BookTicket bookTicket = new BookTicket();

        //To show all exceptions are working perfectly passing different parameters each time in order to create the scenario
        try {
            bookTicket.checkAge(12, "M");
        } catch (NotApplicableForChildrenException e) {
            System.out.println("Exception is " +e);
        }

        try {
            bookTicket.checkAge(12, "R");
        } catch (NotApplicableForChildrenException e) {
            System.out.println("Exception is  " +e);
        }

        try {
            bookTicket.checkAge(12, "PG");
        } catch (NotApplicableForChildrenException e) {
            System.out.println("Exception is " +e);
        }

        try {
            bookTicket.addCard("1111111111111111");
        } catch (CardNotWorkingException e) {
            System.out.println("Exception is " +e);   
        }

        try {
            bookTicket.addCard("12345567911 111");
        } catch (CardNotWorkingException e) {
            System.out.println("Exception is " +e);   
        }
    }
}
