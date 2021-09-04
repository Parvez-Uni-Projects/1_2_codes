public  class ManchesterUnited implements StrongTeam{

    public String name;
    public int maxPlayer;
    public int maxTrophy;
    public int numTournaments;

    public String FanVoice ()
    {
        return "Fan voice";
    }

    public ManchesterUnited (String name , int maxPlayer ,int maxTrophy){
        this.name = name;
        this.maxPlayer = maxPlayer;
        this.maxTrophy = maxTrophy;
    }

    public ManchesterUnited (int numTournaments){
        this.numTournaments = numTournaments;
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

