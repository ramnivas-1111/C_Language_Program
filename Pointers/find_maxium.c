//  Write a program in C to find the maximum number between two numbers using a pointer.

// Sample input :

//  first number : 5
// second number : 6

// Sample output :
// 6 is the maximum number.

#include <stdio.h>
int main()
{
    int a, b, *p = &a, *q = &b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
   if(*p==*q)
   {
    printf("both are equal");
   }
   if(*p>*q)
   {
    printf("%d is big",*p);
   }
   else
   {
     printf("%d is big",*q);
   }
    // *p > *q ? printf("a is big") : *q > *p ? printf("b is big"): printf("Both are  equal");
    return 0;
}