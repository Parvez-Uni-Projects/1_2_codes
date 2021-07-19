public class P1 {
    public static void main(String[] args) {
        int a=15;
        int b=3;
        int c=5;

        if (a%b==0) {
            System.out.println("Divisible by " +b);
        }
        else if (a%c==0) {
            System.out.println("Divisible by " +c );
        }
        else {
            System.out.println("Not Divisible by " +b +"or " +c );
        }
    }
}
