public class Account {
    
    public int accountID;  //declaring public variable
    public double balance;
    public String transactionType;
    
    Account(){  //initializing the variables in this constructor
        accountID=0;
        balance= -1.0;
        transactionType= null;
    }
    
    Account(int id, double balan, String tran){  //another constructor which will assign the variables
        accountID=id;
        balance= balan;
        transactionType= tran;
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
