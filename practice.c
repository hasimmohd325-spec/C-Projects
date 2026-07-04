#include<stdio.h>
int main(){

    int marks;
    printf("enter marks(0-100)");
    scanf("%d",& marks);

    if(marks<30) {
        printf("C Grade\n");
        
    }
    else if (marks>=30 && marks<70){

        printf("B Grade\n");
    }
    else if( marks >=70 && marks<90){

        printf("A Grade\n");
    }

    else{
        printf("A+\n");
        
    }
    // question 2
    char ch;
    printf("enter character=");
    scanf(" %c",&ch);

    if(ch >='A' && ch <='Z'){

        printf("upper\n ");
    }
    else if(ch >='a' && ch <='z'){

        printf("lower\n ");
    }
    else{
        printf("not ch\n");
    }

    int n;
    printf("enter number");
    scanf("%d",& n);
    
    int sum =0 ;
    for (int i = 1; i<=n; ++i)
    {
        sum=sum+i;
    }
   printf("%d\n", sum);

   int x;
   printf("enter number=");
   scanf("%d",& x);

   for (int i = 0; i <= 0; i++)
   {
    printf("%d",i*x);
   }
    int i;
    while(1){
        printf("enter number=");
        scanf("%d",& i);
        printf("%d",i);

        if( i % 2 !=0){

            break;
        }
    }
    printf("good chemp well done");

    for (int j = 1; j <=10; j++)
    {
        if (j==6)
        {
            continue;
        }
        printf("%d\n",j);
        
    }
    int i;
    for ( i = 5; i <= 50; i++)
    {
        if (i % 2 !=0)
        {
            printf("%d\n",i);
        }
        
    }

    int n;
    printf("enter number");
    scanf("%d",& n);
    int fact = 1;

    for (int i = 1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("factoral : %d",fact);

        
return 0;
    
}