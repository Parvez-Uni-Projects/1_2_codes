
public class Bus implements LandVehicle{
    
    public String busName;
    public int busMaxPassanger;
    public int busMaxSpeed;
    public int busWheels;
    
    public String LoudHorn()
    {
        return "Has Loud Horn";
    }
    
    public Bus(String busName, int busMaxPassanger,int busMaxSpeed)
    {
      this.busName = busName;
      this.busMaxPassanger = busMaxPassanger;
      this.busMaxSpeed = busMaxSpeed;
    }
    
    public Bus(int busWheels)
    {
        this.busWheels = busWheels;
    }

    @Override
    public String getName()
    {
        return busName;
    }

    @Override
    public void setName( String name )
    {
        this.busName = busName;
    }
    
    @Override
    public int getMaxPassenger()
    {
        return busMaxPassanger;
    }

    @Override
    public void setMaxPassenger( int maxPassanger )
    {
       this.busMaxPassanger = busMaxPassanger;
    }

    @Override
    public int getMaxSpeed()
    {
        return busMaxSpeed;
    }

    @Override
    public void setMaxSpeed( int maxSpeed)
    {
        this.busMaxSpeed = busMaxSpeed;
    }
    
    @Override
     public int getNumWheels()
     {
         return busWheels;
     }
     
    @Override
     public void setNumWheels( int numWheels)
     {
         this.busWheels = busWheels;
     }
    
}
