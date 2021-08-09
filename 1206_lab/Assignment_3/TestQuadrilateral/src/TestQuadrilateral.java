import java.util.Scanner;

public class TestQuadrilateral {

    static Scanner scanner=new Scanner(System.in);
    public static void main(String[] args) throws Exception {

        System.out.println("EInput 1 value: ");
        double side_s =scanner.nextDouble();
        
        System.out.println("Input 2 value: ");
        double side_r =scanner.nextDouble();
        double base_r =scanner.nextDouble();

        System.out.println("Input 3 value: ");
        double side_t1 =scanner.nextDouble();
        double side_t2 =scanner.nextDouble();
        double height_t =scanner.nextDouble();


        Quadrilateral res1 = new Quadrilateral();
        Quadrilateral res2 = new Quadrilateral();
        Quadrilateral res3 = new Quadrilateral();

        Quadrilateral obj1 = new Quadrilateral();
        CreateQuadrilateral obj2 = new CreateQuadrilateral(obj1);


        res1 = obj2.generateQuad(side_s);
        System.out.println(res1.getType()+" Area: "+ res1.getQuadArea());

        res2 = obj2.generateQuad(side_r, base_r);
        System.out.println(res2.getType()+" Area: "+ res2.getQuadArea());

        res3 = obj2.generateQuad(side_t1, side_t2, height_t);
        System.out.println(res3.getType()+" Area: "+ res3.getQuadArea());


        System.out.println("Hello, World!");
    }
}
