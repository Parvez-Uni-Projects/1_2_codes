
public class AccountDemo {

    
    public static void main(String[] args) {
        
        Account a1= new Account(1001, 5000.0, "debit");
        
        double discount= a1.changeBalance(50);
        
        System.out.println ("Account ID is: " + a1.accountID);
        System.out.println ("Original Balance: " + a1.balance);
        System.out.println ("Transaction Type: " + a1.transactionType);
        System.out.println ("Changed Balance: " +discount);
        
    }
    
}











/*public class App {
    public static void main(String[] args){
        System.out.println("Hello, World!");
        Demo myFrame =new Demo();
        myFrame.init();
    }
} */
