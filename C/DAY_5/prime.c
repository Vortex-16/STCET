#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=2;
    printf("Enter the number to cheek weather it's prime or composite no:  ");
    scanf("%d",&n);
    if(n>=2)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n % i==0)
            printf("The given number is compsite number");
            
            else
            printf("The given number is prime number");
        }
    }
    else
    printf("The given number is composite number");
}