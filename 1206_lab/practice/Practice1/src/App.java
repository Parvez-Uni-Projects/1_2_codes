import java.util.Scanner;

public class App {
    static Scanner sc=new Scanner(System.in); //here scanner is just the user name

    public static void main(String[] args) throws Exception {

        System.out.println("Give two numbers nigga");

        // short shortNumber=10;
        // int intNumber2=100;
        // int intNumber=100;
        // float floatNumber=100;
        // char charNum='A';
        // boolean statement= process(intNumber2,intNumber);
        // int[] cards= {1,2,3,4,456};

        int intNumber=sc.nextInt();
        int intNumber2=sc.nextInt();

        int  multiple= multiplier(intNumber2,intNumber);

        // int result=intNumber+200/3;
        // float result2=floatNumber/3;

        // System.out.println(shortNumber + intNumber);
        // System.out.println(result);
        // System.out.println(result2);
        // System.out.println(charNum);
        // System.out.println(statement);
        System.out.println(multiple);

                // System.out.println("Do you wanna write something ? Tell me");
                //  String name =sc.nextLine();
                // System.out.println("Hello " + name + " bro welcome to another late night coding");
    }

    public static boolean process(int firstvalue ,int secondvalue){
        boolean answer= firstvalue>secondvalue;
        return answer;
    }
    public static int multiplier(int firstvalue ,int secondvalue){
        int answer= firstvalue*secondvalue;
        return answer;
    }
}
