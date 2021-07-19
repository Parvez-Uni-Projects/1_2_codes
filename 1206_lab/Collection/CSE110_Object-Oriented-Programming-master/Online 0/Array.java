public class Array {
    public static void main(String[] args) {
        int[]array = {10,7,6,3,4};
        int n=5;
        int smallest = array[4];
        int fourthSmallest = array[1];
        for(int i=0; i<n; i++){
            if(array[i]<array[4]){
               smallest = array[i];
            }
        }
        for(int i=0; i<n; i++){
           if(array[i]<array[1]){
               fourthSmallest = array[i];
           }
           else{
               fourthSmallest = array[1];
           }
        }
        System.out.println("smallest = " +smallest);
        System.out.println("fourthSmallest = " +fourthSmallest);
    }
}
