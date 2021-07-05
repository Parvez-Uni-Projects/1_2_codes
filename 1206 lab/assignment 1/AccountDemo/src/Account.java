public class Account {
    
    public int accountID;
    public double balance;
    public String transactionType;
    
    Account(){
        accountID=0;
        balance= -1.0;
        transactionType= null;
    }
    
    Account(int id, double balan, String tran){
        accountID=id;
        balance= balan;
        transactionType= tran;
    }
    
    public double changeBalance(double x){
        double blnc = 0;
        if("debit".equals(transactionType))
            blnc= balance-x;
        else if("credit".equals(transactionType))
            blnc= balance+x;
        
        return blnc;
    }
}
