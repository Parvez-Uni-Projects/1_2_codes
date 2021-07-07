public class EnemyShip {
    public double Velocity;
    public String Name;
    public int NumberOfGuns;
    public boolean isAnAlly;

    EnemyShip(){
        Velocity = -1;
        Name = "Empty";
        NumberOfGuns = -1;
        isAnAlly = false;
    }
    EnemyShip(double vel,String nam,int numGun,boolean ally){
        Velocity = vel;
        Name = nam;
        NumberOfGuns = numGun;
        isAnAlly = ally;
    }
    public double GetFightingPower(double x)
    {
        double fightingPower=0;
        if (NumberOfGuns > 20)
            fightingPower = Velocity*x *.6;
        else
            fightingPower = Velocity *x *.2;

        return fightingPower;
    }
    

    
}
