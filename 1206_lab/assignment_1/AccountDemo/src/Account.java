public class Account {
    
    public int accountID;  //declaring public variable
    public double balance;
    public String transactionType;
    
    Account(){  //initializing the variables in this constructor
        this.accountID=0;
        this.balance= -1.0;
        this.transactionType= null;
    }
    
    Account(int accountID, double balance, String transactionType){  //another constructor which will assign the variables
        this.accountID=accountID;
        this.balance= balance;
        this.transactionType= transactionType;
    }
    
    public double changeBalance(double x){    //creating public method for debit and credit
        
        if(this.transactionType.equals("debit"))
            return balance-x;
        else if(this.transactionType.equals("credit"))
            return balance+x;
        return x;
        
    }
}
