public class P4 {
    public static void main(String[] args) {
        int nCount=0;
        int pCount=0;
        int[] arr= {1, -2, 0, 4, -5, 7, 1, -3, 5};
        for(int i=0; i<arr.length; i++){

            if (arr[i]<0){
                nCount = nCount+1;
            }
            else if(arr[i]>0){
                pCount= pCount+1;
            }
        }
        System.out.println("Postive Count= "+pCount+" "+"Negative count= "+nCount);
        if(pCount<nCount){
            System.out.println("Mejor Negative");
        }
        else if(nCount<pCount){
            System.out.println("Mejor Positive");
        }
        else if(nCount==pCount){
            System.out.println("Neutral");
        }
    }
}
