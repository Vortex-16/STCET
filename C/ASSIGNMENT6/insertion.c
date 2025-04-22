#include <stdio.h>

void main()
{
    int arr_size, i, j, current, prev;
    printf("Enter the array size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    printf("Enter the array Elements:  ");
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < arr_size; i++)
    {
            current = arr[i];
            prev = i - 1;
            while (prev >= 0 && arr[prev] > current)
            {
                arr[prev + 1] = arr[prev];
                prev--;
            }   
            arr[prev + 1] = current;
    }
    printf("The insertion sorted array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}