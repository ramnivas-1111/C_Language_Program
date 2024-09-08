// sum of the numbers
// Write a C program to find out the sum of the numbers which is present in a given string.
// Sample Input
// Input as :

// Enter a String : TS12ab345
// Sample Output
// Output as :
// Sum Of the numbers is : 15

#include <stdio.h>
int main()
{
    char str[100];
    int i, sum = 0;
    printf("Enter the string:");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum = sum + str[i]-48;
        }
    }
    printf("%d", sum);
    return 0;
}