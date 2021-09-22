public class primeFactor {
    
    public primeFactor()
    {

    }

    public int checkPrimeFactor(int number)
    {
        
        int factorCheck = 1;
        for (int i = 2 ; i <= number ; i ++)
        {
            if (number % i  == 0)
            {
                for (int j = 2 ; j <= i/2 ; j++)
                {
                    if (i % j == 0)
                    {
                        break;
                    }

                }
                if(i == 5 || i == 2 || i == 3)  factorCheck = 1;
        
                else if (i < number)
                {
                    
                    factorCheck = 0;
                    break;
                } 
            }
        }

        return factorCheck;

    }
}
