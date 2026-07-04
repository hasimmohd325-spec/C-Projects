#include<stdio.h>
int main(){

    int age;
     printf("enter age (10-50)");

     scanf("%d",& age);
     
     switch (age)
     {
     case 10 : printf("age  a kid\n");
        break;
     case 20 : printf("age  a boy\n");
        break;
     case 30 : printf("age  a man\n");
        break;
     case 40 : printf("age  a old man\n");
        break;
     case 50 : printf("age  a old but a survivor\n");
        break;    
     default: printf("death man");
        break;
     }

     int marks;
     printf("enter marks(0-100)");
     scanf("%d",& marks);

     if(marks>=0 && marks<=30 ){
      printf("try again champ");
     }     
     
    else if (marks>=30 && marks<=100 ){
      printf("pass");
    }
    else
    {
      printf("liar");

    }
    return 0;
   }
    