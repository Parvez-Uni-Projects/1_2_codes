public  class Liverpool implements WeakTeam {

    private String name;
    private int maxPlayer;
    private int maxTrophy;
    private int replacementPlayer;

    public Liverpool (String name , int maxPlayer ,int maxTrophy){
        this.name = name;
        this.maxPlayer = maxPlayer;
        this.maxTrophy = maxTrophy;
    }

    public Liverpool (int replacementPlayer){
        this.replacementPlayer = replacementPlayer;
    }

    public String weakVoice ()
    {
        return "weakvoice";
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
    public int getReplacementPlayer() {
        return replacementPlayer;
    }
    public void setReplacementPlayer(int replacementPlayer) {
        this.replacementPlayer = replacementPlayer;
    }


    
    
}
