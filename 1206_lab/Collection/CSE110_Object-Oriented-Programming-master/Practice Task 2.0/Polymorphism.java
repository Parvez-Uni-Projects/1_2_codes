//Sabbir Hossain Abir
//ID: 2020-2-60-185

class Ham{
    public void a(){
        System.out.println("Ham a");
    }
    public void b(){
        System.out.println("Ham b");
    }

    @Override
    public String toString() {
        return "Ham";
    }
}
class Lamb extends Ham{
    public void a(){
        super.a();
    }
    public void b(){
        System.out.println("Lamb b");
    }

    @Override
    public String toString() {
        return super.toString();
    }
}
class Yam extends Lamb{
    public void a(){
        System.out.println("Yam a");
    }
    public void b(){
        super.b();
    }

    @Override
    public String toString() {
        return "Yam";
    }
}
class Spam extends Yam{
    public void a(){
        System.out.println("Spam a");
    }
    public void b(){
        super.b();
    }

    @Override
    public String toString() {
        return super.toString();
    }
}
public class Polymorphism {
    public static void main (String [] args){
        Ham[] food = { new Spam(), new Yam(),
                new Ham(), new Lamb() };
        for (int i = 0; i < food.length; i++) {
            System.out.println(food[i]);
            food[i].a();
            food[i].b();
            System.out.println();
        }
    }
}

/*
1.
 (a) Method Two of subclass ClassB overrides Method Two of superclass classA
 (b) Method MethoodThree and MethodFour hides methods in superclass. Because they are static and can not be accessed.

 2.
   First println statement: b
   Reason: System.out.println(elements[i]);
   Second println statement: c1
   Reason: elements[i].method1();
   Third println statement: a2
   Reason: elements[i].method2();

   Fourth println statement: b
   Reason: System.out.println(elements[i]);
   Fifth println statement: c1
   Reason: elements[i].method1();
   Sixth println statement: b2
   Reason: elements[i].method2();

   Seventh println statement: c
   Reason: System.out.println(elements[i]);
   Eighth println statement: c1
   Reason: elements[i].method1();
   Ninth println statement: c2
   Reason: elements[i].method2();

   Tenth println statement: b
   Reason: System.out.println(elements[i]);
   Eleventh println statement: d1
   Reason: elements[i].method1();
   Twelfth println statement: b2
   Reason: elements[i].method2();

 */