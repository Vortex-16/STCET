#include <stdio.h>
void main()
{
    int arr_size, i ,j;
    printf("Enter the array size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    printf("Enter the array Elements:  ");
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for(i = 0;i<=arr_size-1;i++)
    {
        printf("%d ",arr[i]);
    }
}