
public class Submarine implements SeaVehicle{
    
    public String subName;
    public int subMaxPassanger;
    public int subMaxSpeed;
    public int subDisplacement;
    

    public String FireGun()
    {
        // String st ="Has Fire Gun";
        // return st;

        return "Has fire gun" ;
    }
    
    public Submarine(String subName,int subMaxPassanger,int subMaxSpeed)       
    {
        this.subName =subName;
        this.subMaxPassanger = subMaxPassanger;
        this.subMaxSpeed = subMaxSpeed;
    }
    public Submarine( int subDisplacement)
    {
        this.subDisplacement = subDisplacement;
    }
        
    @Override
    public String getName()
     {
       return subName;   
     }
     @Override
    public  void setName( String name )
    {
         this.subName = subName;
    }

     @Override
    public int getMaxPassenger()
    {
       return this.subMaxPassanger; 
    }

     @Override
    public void setMaxPassenger( int maxPassanger )
    {
        this.subMaxPassanger = subMaxPassanger;
    }

     @Override
    public int getMaxSpeed()
    {
        return this.subMaxSpeed;
    }

     @Override
    public void setMaxSpeed( int maxSpeed)
    {
        this.subMaxSpeed = subMaxSpeed;
    }

     @Override
    public  int getDisplacement()
    {   
        return this.subDisplacement;
    }
    
    @Override
   public void setDisplacement( int displacement)
   {
        this.subDisplacement = subDisplacement;
   }
   
}
