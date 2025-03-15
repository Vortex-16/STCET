#include<stdio.h>

void main() {
    int a, b, c, largest, smallest;
    // Taking input
    printf("Enter the first number a: ");
    scanf("%d", &a);
    printf("Enter the second number b: ");
    scanf("%d", &b);
    printf("Enter the third number c: ");
    scanf("%d", &c);
    // Finding the largest number
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    // Finding the smallest number
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
}