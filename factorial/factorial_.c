#include<stdio.h>

int factorial(int num){
    int fact =1;
    for(int i=1; i<=num; i++){
        fact*=i;

    }
    return fact;
}
int main(){
    int num=1;
    printf("enter the number ");
    scanf("%d",&num);
    if (num<0){
        printf("factorial is not define");
    }
    else{
        printf("factorial of  %d is %d\n",num,factorial(num));

    }
    return 0;
}