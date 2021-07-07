public class AccountDemo {

    public static void main(String[] args){ //this has the main method
        
        Account a1= new Account(1001, 5000.0, "debit");  //inputting a demo data for test purpose
        
        public double discount= a1.changeBalance(50);          //declaring a variable which will store the balance after debit/credit
        System.out.println ("Account ID is: " + a1.accountID);     //the line belows will print out the values from the Account class
        System.out.println ("Original Balance: " + a1.balance);
        System.out.println ("Transaction Type: " + a1.transactionType);
        System.out.println ("Changed Balance: "  + discount);        
    }
    
}
