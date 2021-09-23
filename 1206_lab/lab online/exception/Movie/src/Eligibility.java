import movieexception.*;

public class Eligibility {

    public void checkAge(int age , String rating) throws NotApplicableForChildrenException
    {
        
        if(age < 18 && rating.equals("R")){
            throw new NotApplicableForChildrenException("Not applicable for people under 18");
        }
        else if (age < 15 && rating.equals("M")){
            throw new NotApplicableForChildrenException("Not applicable for kids under 15");
        }
        else if (age < 18 && (rating.equals("G") || rating.equals("PG") ) ){
            System.out.println("Applicable for kids");
        }



    }
    
}
