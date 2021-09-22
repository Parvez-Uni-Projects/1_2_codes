package exceptions;

public class NoInformationFoundException extends RuntimeException{

    public NoInformationFoundException ()
    {
        super();
    }

    public NoInformationFoundException (String message)
    {
        super(message);
    }


}