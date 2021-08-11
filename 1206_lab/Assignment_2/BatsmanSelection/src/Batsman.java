public class Batsman {

    private int totalRuns;
    private int totalOuts;

    Batsman(int totalRuns ,int totalOuts){
        this.totalRuns = totalRuns;
        this.totalOuts = totalOuts ;
    }

    public int gettotalRuns(){
        return totalRuns;
    }

    public void settotalRuns(){
        this.totalRuns =totalRuns;
    }

    public int gettotalOuts(){
        return totalOuts;
    }

    public void settotalOuts(){
        this.totalOuts =totalOuts;
    }
    
}
