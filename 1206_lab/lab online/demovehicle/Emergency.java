public abstract class Emergency  {
    
      String a_name;
      int a_passenger;
      int a_mspeed;
    
      public Emergency()
      {
          
      }
      public Emergency (String a_name,int a_passenger,
                         int a_mspeed)
      {
          this.a_name = a_name;
          this.a_passenger = a_passenger;
          this.a_mspeed = a_mspeed;  
          
      }
      
    abstract void sirenSound();
     
    void type()
    {
        System.out.println("This is an Emergency Vehicle");
    }
}
