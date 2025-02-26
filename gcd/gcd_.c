#include<stdio.h>
int gcd(int a, int b){
    while(a!=0){ // run till a is equal zero
        int temp=a;
        a =b%a;
        b =temp;

    }
    return b;
}
 int main(){
    int a ,b;
    printf("enter the number ");
    scanf("%d %d",&a,&b);
    printf("gcd of %d and %d is %d",a,b,gcd(a,b));

    return 0;
 }
 



    