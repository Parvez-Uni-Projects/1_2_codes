import java.util.Scanner;

public class BatsmanSelection {

    static Scanner scanner= new Scanner(System.in);

    public static void main(String[] args){


        System.out.println("Total Runs: "); 
        int totalRuns=scanner.nextInt();
        System.out.println("Total Outs: ");
        var totalOuts=scanner.nextInt();

        Batsman   bat1 =new Batsman(totalRuns,totalOuts);
        Committee com1 =new Committee(bat1);

        com1.calculateAverage(bat1);
    }
}
