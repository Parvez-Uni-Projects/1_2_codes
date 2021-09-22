import java.util.Scanner;

public class ArrayTest {
    public static void main(String[] args) throws Exception {

        Scanner input = new Scanner(System.in);

        Employees[] employeesArray =new Employees[3];

        employeesArray[0] = new Employees(1,"rober","manager",35);
        employeesArray[1] = new Employees(2,"rober1","manager1",351);
        employeesArray[2] = new Employees(3,"rober2","manager2",352);

        for (int i =0 ; i <employeesArray.length;i++){
            int id =employeesArray[i].getEid();
            String name =employeesArray[i].getName();
            String designation = employeesArray[i].getDesignation();
            int age =employeesArray[i].getEid();


            System.out.println("Employee ID" + id + "Name " + name + "Designation " + designation+ "Age "+ age);

        }

        System.out.println("Enter the size of the array");
        int arraySize = input.nextInt();

       int array1[] = new int[10];

       //int array2[]={10,20,30,40,50};

       int array3[]= new int [arraySize];


       for (int i =0 ; i <arraySize ;i++)
       {

        System.out.println("Element " + i+1 + ":");
        array3[i]=input.nextInt();

       }

       array1[0] =10;

       for (int i =0 ; i<array1.length ; i++ )
       {

        System.out.println("Hello, World!");

       }

      static int[] sortArray(int arr[]){
           int n=arr.length;
           int temp;
           for (int i = 0 ; i < n ; i ++)
           {
               for (int j =i+1 ; j <n ;j++)
               {
                   if (arr[i]>arr[j])
                   {
                       temp = arr[i];
                       arr[i] =arr[j];
                       arr[j] =temp;
                   }
               }
           }
           return arr;
       }
        
    }
}
