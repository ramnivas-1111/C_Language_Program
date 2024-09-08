// Que 2 : Write a program in C to add two numbers using pointers.

// Sample input :
// first number : 5
// second number : 6

// Sample output : The sum of the entered numbers is : 11

#include <stdio.h>
int main()
{
    int a, b, sum, *p = &a, *q = &b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the Second number:");
    scanf("%d", &b);
    sum = *p + *q;
    printf(" The sum is %d", sum);
    return 0;
}