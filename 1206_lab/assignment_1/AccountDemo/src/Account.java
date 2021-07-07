public class Account {
    
    public int accountID;  //declaring public variable
    public double balance;
    public String transactionType;
    
    Account(){  //initializing the variables in this constructor
        accountID=0;
        balance= -1.0;
        transactionType= null;
    }
    
    Account(int accountID, double balance, String transactionType){  //another constructor which will assign the variables
        this.accountID=accountID;
        this.balance= balance;
        this.transactionType= transactionType;
    }
    
    public double changeBalance(double x){    //creating public method for debit and credit
        double blnc = 0;
        if("debit"==(transactionType))
            blnc= balance-x;
        else if("credit"==(transactionType))
            blnc= balance+x;
        return blnc;
    }
}
