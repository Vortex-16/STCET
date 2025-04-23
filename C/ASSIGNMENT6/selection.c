#include <stdio.h>

void main()
{
    int arr_size, i, j, si;
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
        si=arr[i];
        for (j = i+1; j < arr_size; j++)
        {
            if (arr[j] < si)
            {
                si = arr[j];
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The selection sorted array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// OUTPUT:
// Enter the array size: 5
// Enter the array Elements:  5 4 3 2 1
// The selection sorted array is: 1 2 3 4 5