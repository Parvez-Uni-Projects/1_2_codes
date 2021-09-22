
public class App {
    public static void main(String[] args) throws Exception {
        

        int a = 2 ;
        int b = 2;
        String[] result = new String [2];
        result[0] = "Yes";
        result[1] = "No";

        int index;
        index = (a/b) -1;

        if (result[index] == "Yes")
        {
            System.out.println(result[index]);
        }
        else 
        {
            System.out.println(result[index+1]);
        }

    }
}


//System.out.println("Hello, World!");

        // ArrayList<Patient> patient = new ArrayList <Patient> ();

        // ArrayList <String> IndoorPatient = new ArrayList <String> ();

        // ArrayList<String> OutdoorPatient = new ArrayList <String> ();


        // ArrayList<Integer> roll = new ArrayList <Integer> ();


        // roll.add(12);
        // roll.add(14);
        // roll.add(9);
        // roll.add(7);

        // patient.add(new IndoorPatient(223, 300, 26));
        // patient.add(new IndoorPatient(245, 3000, 24));
        // patient.add(new IndoorPatient(209, 4000, 32));

        // patient.add(new OutdoorPatient(223));
        // patient.add(new OutdoorPatient(245));
        // patient.add(new OutdoorPatient(209));

        // IndoorPatient indoor= new IndoorPatient();
        // IndoorPatient indoor2= new IndoorPatient();
    
        // OutdoorPatient outdoor = new OutdoorPatient();
        // OutdoorPatient outdoor2 = new OutdoorPatient();

        // ArrayList<IndoorPatient> arrayList = new ArrayList<IndoorPatient>();

        // arrayList.add(new IndoorPatient(101, 33, 26));
