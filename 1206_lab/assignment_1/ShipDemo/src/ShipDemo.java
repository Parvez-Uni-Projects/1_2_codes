public class ShipDemo {
    public static void main(String[] args) throws Exception {
        EnemyShip enemy = new EnemyShip(10.2,"Gladiator",30,false);
        double fight= enemy.GetFightingPower(3);

        System.out.println ("Name: " + enemy.Name);
        System.out.println ("Velocity: " + enemy.Velocity);
        System.out.println ("NumberofGuns: " + enemy.NumberOfGuns);
        System.out.println ("IsAnAlly: " + enemy.isAnAlly);
        System.out.println ("Fighting Power: " + fight);

    }
}
