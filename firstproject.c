#include<stdio.h>
int main(){
    int a,b;
    char op;
   printf("enter first no :");
   scanf("%d",&a);
   printf("enter op (+,-,*,/) :");
   scanf(" %c",& op);
   printf("enter second no :");
   scanf("%d",&b);

   if (op == '+')
   {
    printf("answer = %d",a+b);
   }
   else if (op == '-')
   {
    printf("answer = %d",a-b);
   }
   else if (op =='*')
   {
    printf("answer = %d",a*b);
   }
   else if (op =='/')
   {
    printf("answer = %d",a/b);
   }
   else
   {
    printf("error");
   }
   
   
   
    return 0;
}