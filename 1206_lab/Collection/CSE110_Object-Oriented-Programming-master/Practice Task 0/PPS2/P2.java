public class P2 {
    public static void main(String[] args) {
        int a=45000;
        int b=3;
        int c=5;
        double t;

        if (a<30000) {
            System.out.println( t=a*0.04);
        }
        else if (a<70000) {
            System.out.println( t=a*0.1 );
        }
        else if (70000<a) {
            System.out.println( t=a*0.15 );
        }
    }

}
