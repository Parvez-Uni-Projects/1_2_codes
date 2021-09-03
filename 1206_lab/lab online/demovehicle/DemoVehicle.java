
public class DemoVehicle {

    
    public static void main(String[] args) {
      
        
        LandVehicle lv1 = new Bus(6);
        Bus b = new Bus("Bus",60,60);
       
        System.out.println("Vehicle is "+b.getName());
        System.out.println("Max Speed Limit "+b.getMaxSpeed());
        System.out.println("Total Wheels "+lv1.getNumWheels());
        System.out.println("Accomodations Total Passengers "+b.getMaxPassenger());
        System.out.println(b.LoudHorn());
        
        SeaVehicle sv = new Submarine(14);
        Submarine sb = new Submarine("Submarine",64,68);
        
      
        sb.setMaxPassenger(68);
        System.out.println("Vehicle is "+sb.getName());
        System.out.println("Max Speed Limit "+sb.getMaxSpeed());
        System.out.println("Total Displacement "+sv.getDisplacement());
        System.out.println("Accomodations Total Passengers "+sb.getMaxPassenger());
        System.out.println(sb.FireGun());
        
        LandVehicle lv = new Ambulance(4);
        Emergency em = new Ambulance ("Ambulance",2,15);
        
        em.type();
        em.sirenSound();
        System.out.println("Vehicle is "+em.a_name);
        System.out.println("Max Speed Limit "+em.a_mspeed);
        System.out.println("Total Wheels "+lv.getNumWheels());
        System.out.println("Accomodations Total Passengers "+em.a_passenger);
        
    }
    
}
