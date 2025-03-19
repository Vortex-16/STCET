#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter the first number a:  ");
    scanf("%d",&a);
    printf("Enter the second numer b:  ");
    scanf("%d",&b);
    printf("Enter the third number c:  ");
    scanf("%d",&c);
    float root,roots;
    root= -b+(sqrt((pow(b,2)-(4*a*c))/2*a));
    roots= -b-(sqrt((pow(b,2)-(4*a*c))/2*a));
    printf("The first root is: %f\n",root);
    printf("The first root is: %f\n",roots);
}