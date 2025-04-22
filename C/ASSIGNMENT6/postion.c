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
    printf("The array before changing the position is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the position to change: ");
    int pos1, pos2;
    scanf("%d", &pos1);
    printf("Enter the new position: ");
    scanf("%d", &pos2);
    if (pos1 < arr_size && pos2 < arr_size)
    {
        int temp = arr[pos1];
        arr[pos1] = arr[pos2];
        arr[pos2] = temp;
    }
    else
    {
        printf("Invalid position\n");
    }
    printf("The array after changing the position is: ");  
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}