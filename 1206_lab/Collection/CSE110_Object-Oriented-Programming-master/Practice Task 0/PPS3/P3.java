public class P3 {
    public static void main(String[] args) {
        int i;
        int x;
        int p;
        int n=4;
        int a=3;
        int sum=0;
        for(i=1;i<=n;i++){
            x=3*i;
            sum+=Math.pow(x,a);
        }
        System.out.println(sum);
    }
}
