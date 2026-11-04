#include<stdio.h>
int main(void){
    int a,b,c;
    a=12;
    b=35;
    c=a;
    b=b+c-b;
    printf("%d,%d,%d",a,b,c);



    return 0;
}