public class Researcher {
    public static void main(String[] args) {

        Transceiver transobj = new Transceiver();

        transobj.setValue(30);

        try {
            transobj.decodeWave();
        } catch (NotPerfectNumberException e) {
            System.out.println("Exception" + e);
        }
    }
}


