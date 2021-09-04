
public  class Fifa extends Combined implements StrongTeam  {

    private String name;
    private int maxPlayer;
    private int maxTrophy;
    private int numTournaments;

    public Fifa (String name , int maxPlayer ,int maxTrophy){
        this.name = name;
        this.maxPlayer = maxPlayer;
        this.maxTrophy = maxTrophy;
    }

    public Fifa (int numTournaments){
        this.numTournaments = numTournaments;
    }
    

    public void worldSound(){

        System.out.println("Importancy");
        
    }

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getMaxPlayer() {
        return maxPlayer;
    }
    public void setMaxPlayer(int maxPlayer) {
        this.maxPlayer = maxPlayer;
    }
    public int getMaxTrophy() {
        return maxTrophy;
    }
    public void setMaxTrophy(int maxTrophy) {
        this.maxTrophy = maxTrophy;
    }

    public int getNumTournaments() {
        return numTournaments;
    }
    public void setNumTournaments(int numTournaments) {
        this.numTournaments = numTournaments;
    }
    
}
