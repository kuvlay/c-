#include<stdio.h>
#include<math.h>
int main(){
   float a,b,c,d,root1,root2;

   printf("enter a ,b,c  ");
   scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0){
        printf("roots are imaginary");
     }
     else if(d==0){
        printf("both roots are equal");
        root1=-b/ (2*a);
        printf("roots of quadratic %f",root1);
     }
     else{
        printf("roots are real");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots of quadratic equation %f %f",root1,root2);
     }
     return 0;


    }

