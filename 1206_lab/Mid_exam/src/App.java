public class App {

    static int a= 40;
    public static void main(String[] args) throws Exception {

        System.out.print (a + "");
        add();
        System.out.print (a);
    }

        private static void add(){
            a =  a+ 40;
        }
}

