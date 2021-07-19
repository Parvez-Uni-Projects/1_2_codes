public class P3 {
    public static void main(String[] args) {
        int x=7000000;
        double c;
        if (x < 2500) {
                c = 30 + (x * 0.017);
                if(c<39){
                    System.out.println("$39");
                }
                else {
                    System.out.println("$" + c);
                }
            }
        else if (x >= 2500 && x <= 6250) {
                c = 56 + (x * 0.0066);
                System.out.println("$"+c);
            }
        else if (x > 6250 && x <= 20000) {
                c = 76 + (x * 0.0034);
                System.out.println("$"+c);
            }
        else if (x > 20000 && x <= 50000) {
                c = 100 + (x * 0.0022);
                System.out.println("$"+c);
            }
        else if (x > 50000 && x <= 5000000) {
                c = 155 + (x * 0.0011);
                System.out.println("$"+c);
            }
        else if (x > 5000000) {
                c = 255 + (x * 0.0009);
                System.out.println("$"+c);
            }
    }
}
