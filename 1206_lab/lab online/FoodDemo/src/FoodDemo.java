public class FoodDemo {
    public static void main(String[] args) throws Exception {


        JunkFood pizza = new Pizza("Very high");
        Pizza pizza2 = new Pizza("Pizza",266 , 10);


        System.out.println("Food is "+pizza2.getName());
        System.out.println("Calories per 100 gm :"+pizza2.getCalories());
        System.out.println("Fat per 100 gm :"+pizza2.getFat());
        System.out.println("Health issues are :" + pizza.getHealthIssues());
        System.out.println(pizza2.problems());


        HealthyFood milk = new Milk("Very high");
        Milk milk2 = new Milk("Milk",42,1);

        System.out.println("Food is "+milk2.getName());
        System.out.println("Calories per 100 gm :"+milk2.getCalories());
        System.out.println("Fat per 100 gm :"+milk2.getFat());
        System.out.println("Health Benefits are :" + milk.getNutritionValue());
        System.out.println(milk2.calcium());



        HealthyFood salad = new Salad("High");
        Salad salad2 = new Salad("Salad",20,.2);

        System.out.println("Food is "+salad2.getName());
        System.out.println("Calories per 100 gm :"+salad2.getCalories());
        System.out.println("Fat per 100 gm :"+salad2.getFat());
        System.out.println("Health Benefits are :" + salad.getNutritionValue());
        salad2.cholesterol();


        
        
        

    }
}