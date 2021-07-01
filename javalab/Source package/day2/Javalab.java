package Source package.day2;

public class Javalab {
    public static void main(string [] args){
        //Todo code application logic here

        int var = 6;
        Smartphone obj1= new Smartphone();
        Smartphone obj2= new Smartphone();

        // obj1.maker = "Samsung";
        // obj1.os    = "Android";
        // obj1.modelnumber = 7  ;

        obj1.setvariables("Samsung","Android", 7);
        int value =obj1.sum(8,7);


        System.out.println("Maker = "+ obj1.maker);
        System.out.println("OS = "+ obj1.os);
        System.out.println("modelnum= "+ obj1.modelnum);
        System.out.println(value);



    }
}
