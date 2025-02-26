#include<stdio.h>

int reversenumber(int num){
   int reverse=0, remainder;
   while(num>0){
    remainder=num%10;
    reverse=reverse*10+remainder;
    num =num/10;

   }
   return reverse;
}
void checkpalindrome(int num){
    if(num==reversenumber(num)){
        printf("%d is a palindrome", num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
}
int main(){
    int num;
    printf("enter the element  ");
    scanf("%d",&num );
    checkpalindrome(num);
    return 0;
}