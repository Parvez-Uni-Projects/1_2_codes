package validationexceptions;


public class Student extends Enroll{
    
    
   public void upload(String fileName){
       
       if(fileName.equals(".zip") && fileName.startsWith("180204")|| fileName.startsWith("180104")
               || fileName.startsWith("170204"))
       {
           System.out.println("Valid File");
       }
       else 
       {
           throw new IllegalArgumentException();
       }
   }
}