public class DemoTeam {
    public static void main(String[] args) throws Exception {
     
        StrongTeam manu = new ManchesterUnited(4);
        ManchesterUnited manu2 = new ManchesterUnited("Manchester United",33, 46);

        System.out.println("Team is "+ manu2.getName());
        System.out.println("Max Trophy "+ manu2.getMaxTrophy());
        System.out.println("Total Tournament "+ manu.getNumTournaments());
        System.out.println("Total Players "+ manu2.getMaxPlayer());
        System.out.println("Has "+ manu2.FanVoice());




        WeakTeam liver = new Liverpool(12);
        Liverpool liver2 = new Liverpool ("Liverpool",31,44);

        System.out.println("Team is "+ liver2.getName());
        System.out.println("Max Trophy "+ liver2.getMaxTrophy());
        System.out.println("Total Tournament "+ liver.getReplacementPlayer());
        System.out.println("Total Players "+ liver2.getMaxPlayer());
        System.out.println("Has "+ liver2.weakVoice());


        StrongTeam fifa = new Fifa(12);
        Fifa fifa2 = new Fifa ("Fifa",100,120);

        System.out.println("Team is "+ fifa2.getName());
        System.out.println("Max Trophy "+ fifa2.getMaxTrophy());
        System.out.println("Total Tournament "+ fifa.getNumTournaments());
        System.out.println("Total Players "+ fifa2.getMaxPlayer());
        fifa2.worldSound();

       







        

    }
}
