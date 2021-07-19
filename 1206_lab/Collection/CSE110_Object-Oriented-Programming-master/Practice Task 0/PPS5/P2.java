public class P2 {
    public static void main(String[] args) {
        int[] arr= {1, 2, 0, 4, 5, 7, 1, 3, 5};
        for(int i=0; i<arr.length; i++){
            if (arr[i]%2==0){
                arr[i]=arr[i]+2;
            }
            else if((arr[i]%2)!=0){
                arr[i]=arr[i]+3;
            }
            System.out.println(arr[i]);
        }
    }
}