public class P5 {
    public static void main(String[] args) {
        int sum=0;
        int[] arr= {1, -2, 0, 4, -5, 7, 1, -3, 5};
        for (int i=0; i<arr.length; i++){
            sum=sum+arr[i];
        }
        System.out.println("Sum= " +sum);
        double aver=(sum/arr.length);
        System.out.println("Average= "+aver);
    }
}
