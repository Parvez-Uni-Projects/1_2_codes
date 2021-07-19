public class P3 {
    public static void main(String[] args) {
        int count=0;
        int[] arr= {1, -2, 0, 4, -5, 7, 1, -3, 5};
        for(int i=0; i<arr.length; i++){
            if (arr[i]<0){
                count= count+1;
            }
        }
        System.out.println(count);
    }
}
