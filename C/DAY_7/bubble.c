#include <stdio.h>

void main()
{
    int arr_size, i, j, a, b, c = 0;
    printf("Enter the array size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    printf("Enter the array Elements:  ");
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < arr_size-1; i++)
    {
        for (j = 0; j < arr_size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    printf("The bubble sorted array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}