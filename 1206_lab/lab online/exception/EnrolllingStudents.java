

import validationexceptions.*;

public class EnrolllingStudents {
    public static void main(String[] args) {
      
        Student obj1 = new Student();
        
        Scanner sc = new Scanner(System.in);
        String st1= sc.nextLine();
        String filename = sc.nextLine();
        
        Scanner sc1 = new Scanner(System.in);
        int age = sc1.nextInt();
        try{
            obj1.upload(filename);
        }catch(IllegalArgumentException e){
            
            System.out.println(e);
        }
        
        try{
            obj1.validateEmail(st1);
        }catch(NotAcceptableAgeException e)
        {
            System.out.println(e);
        }
        try{
            obj1.validateAge(age);
        }catch(NotAcceptableAgeException e)
        {
            obj1.validateAge(age);
        } 
    }
}

