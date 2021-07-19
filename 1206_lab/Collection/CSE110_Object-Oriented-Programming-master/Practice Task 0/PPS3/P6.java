public class P6 {
    public static void main(String[] args) {
        int[] arr= new int[4];
        int sum=0;
        for(int i=0; i<arr.length; i++){
            arr[i]= i*3;
        }
        for(int i=0; i< arr.length; i++){
            System.out.println(arr[i]);
            sum+=arr[i];
        }

        System.out.println("Sum of the series: "+ sum);
    }
}
