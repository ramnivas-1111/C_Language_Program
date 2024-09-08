// Sort the string
// Write a C program to sort the string data and print it.
// Sample Input
// Input as :

// Enter a String : apple
// Sample Output
// Output as :

// After Sorting the String is : aelpp

#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    printf("Enter the string:");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i+1; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s",str);
    return 0;
}