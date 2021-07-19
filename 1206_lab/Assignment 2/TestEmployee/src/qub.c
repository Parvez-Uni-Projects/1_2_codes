#include <stdio.h>

int power(int num,int pow){
    int res=1;
    for (int i =0 ; i < pow ;i++)
        {
            res*=num;
        }
    return res;
}
int len_dig(int num){
    int len;
    for(int i=1 ; 0 != num;i++)
    {
        num/=10;
         len =i;
    }
    return len;
}
int main ()
{
    int n =190 ,sum =0 ;

    int digit;

    for (int i =0;i<len_dig(n) ;i++)
    {
        digit= n%10;
        n/=10;
        sum+= power(digit,3);
    }

    printf("%d",len_dig(n));
    printf("\n%d",sum);

    return 0;

}