#include<stdio.h>
void main()
{
    int a,b,s;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Press 1 for addition of a and b: a+b\n");
    printf("Press 2 for diffrence of a and b: a~b\n");
    printf("Press 3 for product of a and b: a*b\n");
    printf("Press 4 for quotient of a and b: a/b\n");
    printf("Enter your choice(1-4): ");
    scanf("%d",&s);
    switch (s)
    {
    case 1:
        int sum=a+b;
        printf("The sum of a & b is: %d\n",sum);
        break;
    
    case 2:
        int diff=a-b;
        if(diff<0)
        diff *=-1;
        printf("The diff of a & b is: %d\n",diff);
        break;
    case 3:
        int pro=a*b;
        printf("The product of a and b is: %d\n",pro);
        break;
    case 4:
        double quo=a/b;
        printf("The quotinet of a and b is: %lf\n",quo);
        break;
    
    default:
        printf("Enter valid choice btween 1-4");
        break;
    }
}
