#include<stdio.h>
#include <string.h>
int main (){

    char str1[10]="yoyo";
    char str2[10]="yoyo";
    char str3[10]="yoyoff";


    printf("The value of strcmp  when equal is %d\n",strcmp(str1,str2));
    printf("The value of strcmp  when equal is %d\n",strcmp(str1,str3));

}