

public class Ambulance extends Emergency implements LandVehicle {
    
    public int a_numWheels;

    public Ambulance(String a_name,int a_passenger,int a_mspeed)
    {  
        super(a_name,a_passenger,a_mspeed); 
    }
    
    public Ambulance(int a_numWheels)
    {
        this.a_numWheels = a_numWheels;
    }

    public Ambulance()
    {
        super();
    }

 
     @Override
     void sirenSound()
     {
         System.out.println("Alarming"); 
     }
     
     @Override
    public  String getName()
     {
         return super.a_name;
     }

     @Override
    public void setName( String name )
    {
       super.a_name = a_name;
    }
    
    @Override
  public  int getMaxPassenger()
    {
        return super.a_mspeed;
    }

    @Override
  public  void setMaxPassenger( int maxPassanger )
  {
      super.a_passenger =a_passenger;
  } 

    @Override
    public int getMaxSpeed()
     {
         return super.a_mspeed;
     }
    
    @Override
  public  void setMaxSpeed( int maxSpeed)
    {
        super.a_mspeed = a_mspeed;
    }
    @Override
  public int getNumWheels()
  {
      return a_numWheels;
  }

    @Override
   public void setNumWheels( int numWheels)
   {
       this.a_numWheels =a_numWheels;
   }

 


 
  
}
