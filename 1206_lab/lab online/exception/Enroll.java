package validationexceptions;




public class Enroll implements Validation {

   
    public void validateEmail(String email)
    {
        if(email.contains("@") && email.endsWith(".com"))
        {
            System.out.println("Valid");
        }
       else
    {
       throw new NotAcceptableAgeException("InvalidEmailException.");
    }
}

public void validateAge (int age){
    
         if(age<18){
             throw new NotAcceptableAgeException("Too young to enroll");
         }
         else if(age == 35){  
           throw  new NotAcceptableAgeException("Too old to enroll");
         }
         else
         {
             System.out.println("Age is valid");
         }
    
}
    
    
}