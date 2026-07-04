#include<stdio.h>
int main() {
    printf("mohammad\n");

    printf("hello world");
    int age=19;
    char and='&';
    float pi=3.14;
    printf("age is %d\n",age);
    printf("and is %c\n",and);
    printf("pi is %f\n",pi);
   
    //sum of to numbers

    int a, b;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    printf("sum of a & b : %d\n",a+b);

    //area of square

    int side;
    printf("enter side ");
    scanf("%d",&side);
    printf("area of squar :%d\n",side*side);

    //area of circle
    float radius;
    printf("enter radius");
    scanf("%f",&radius);
    printf("area of circle : %f\n",3.14*radius*radius);

    //area of rectangle
    int A, B;
    printf("enter A");
    scanf("%d",&A);
    printf("enter B");
    scanf("%d",&B);
    printf("area of rectangle : %d",2*(A+B));
    



    return 0;
}