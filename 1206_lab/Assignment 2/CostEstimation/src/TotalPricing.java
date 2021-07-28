//import java.awt.print.Book;

public class TotalPricing {

    public Book bookObj;

    TotalPricing(Book bookObj){
        this.bookObj=bookObj;
    }

    public void finalCost(Book bookObj){

        int totalPrice = bookObj.getNumberOfPages() * bookObj.getCostPerPage();

        System.out.println("Total Price : "+ totalPrice);

        int printTotalPrice = totalPrice;


        int square = totalPrice*totalPrice;
        System.out.println("Squared Value : "+ square); 

        int length=String.valueOf(totalPrice).length();
        int lastDigit=0;
        int i ;
        for (i =0;i <length;i++){
            int digit = square%10;
            square/=10;
            lastDigit+= digit * Math.pow(10, i);
            System.out.println("Digit is "+ digit);
            System.out.println("Sum of Last digit : "+ lastDigit);
        }

        
        
        if(printTotalPrice == lastDigit)
        {
            System.out.println("Pricing is too high ");
        }
        else{
            System.out.println("Pricing is ok");
        }

   
    }
    


   
    
}
