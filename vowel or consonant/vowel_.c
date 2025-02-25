#include<stdio.h>

int main(){
    char ch;
    printf("enter character  ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
       printf("%c is a vowel ", ch); 
    }
       else if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z')) {
        printf("%c is a consonat ", ch);
       }
       else{
        printf("%cis not an alphabet", ch);
       }

  
    return 0;
    }

