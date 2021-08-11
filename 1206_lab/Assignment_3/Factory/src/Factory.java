
import java.util.Scanner;
public class Factory {
    static Scanner scanner=new Scanner(System.in);

    public static void main(String[] args) throws Exception {

        int productID = 2;
        double productWeight = 110;

        int NewproductID = 6;
        double NewProductWeight = 100;

        

        Product obj = new Product();
        obj.setproductID(productID);
        obj.setProductWeight(productWeight);


        Product obj1 = new Product();
        obj1 = obj.checkAndGenerate(productID,productWeight);
        System.out.println("Product ID : " + obj1.getproductID() + " Product Weight : " + obj1.getProductWeight());
        
        Product obj2 = new Product();
        obj2 = obj.checkAndGenerate(productID);
        System.out.println("Product ID : " + obj2.getproductID() + " Product Weight : " + obj2.getProductWeight());

        Product obj3 = new Product();
        obj3 = obj.checkAndGenerate(productWeight);
        System.out.println("Product ID : " + obj3.getproductID() + " Product Weight : " + obj3.getProductWeight());

        Product obj4 = new Product();
        obj4 = obj.checkAndGenerate(obj);
        System.out.println("Product ID : " + obj4.getproductID() + " Product Weight : " + obj4.getProductWeight());

        Product obj5 = new Product();
        obj5 = obj.checkAndGenerate(productID,NewproductID);
        System.out.println("Product ID : " + obj5.getproductID() + " Product Weight : " + obj5.getProductWeight());

        Product obj6 = new Product();
        obj6 = obj.checkAndGenerate(productWeight,NewProductWeight);
        System.out.println("Product ID : " + obj6.getproductID() + " Product Weight : " + obj6.getProductWeight());




    }
}
