public class OutdoorPatient extends Patient {

    private int visitingFee;

    public OutdoorPatient(int visitingFee) {
        this.visitingFee = visitingFee;
    }
    public OutdoorPatient() {
        
    }



    public String toString() {
        return "OutdoorPatient{" +
                "visitingFee=" + visitingFee +
                '}';
    }

    @Override
    public int bill(int visitingFee) {
        return visitingFee;
    }
    
    public void setVisitingFee(int visitingFee) {
        this.visitingFee = visitingFee;
    }
    public int getVisitingFee() {
        return visitingFee;
    }
    
}
