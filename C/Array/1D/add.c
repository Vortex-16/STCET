#include<stdio.h>
void main()
{
    int s=0,arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the elments of array arr[%d]: ",i);
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    printf("Sum of the arr[10] is:  %d\n",s);
    
}