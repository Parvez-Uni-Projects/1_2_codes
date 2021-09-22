public class IndoorPatient extends Patient {

    private int bedFee;
    private int medicineFee;
    private int labTestFee;

    public IndoorPatient(int bedFee, int medicineFee, int labTestFee) {
        this.bedFee = bedFee;
        this.medicineFee = medicineFee;
        this.labTestFee = labTestFee;
    }

    public IndoorPatient() {
       
    }

    public String toString() {
        return "IndoorPatient{" +
                "bedFee=" + bedFee +
                ", medicineFee=" + medicineFee +
                ", labTestFee=" + labTestFee +
                '}';
    }

    @Override
    public int bill(int visitingFee) {
        return bedFee+medicineFee+labTestFee;
    }

    public void setBedFee(int bedFee) {
        this.bedFee = bedFee;
    }
    public void setLabTestFee(int labTestFee) {
        this.labTestFee = labTestFee;
    }
    public void setMedicineFee(int medicineFee) {
        this.medicineFee = medicineFee;
    }
    public int getBedFee() {
        return bedFee;
    }
    public int getLabTestFee() {
        return labTestFee;
    }
    public int getMedicineFee() {
        return medicineFee;
    }
    
}
