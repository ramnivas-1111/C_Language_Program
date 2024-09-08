// Remove Characters
// Write a C Program to Remove Characters in Second String which are present in First String.
// Sample Input
// Input 1st string: apple

// Input 2nd string: aeroplane
// Sample Output
// Output as : ron

#include <stdio.h>
int main() 
{
    char str1[100], str2[100];
    int i, j;
    printf("Enter the string:");
    scanf("%[^\n]", str1);
    printf("Enter the string:");
    scanf(" %[^\n]", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = ' ';
            }
        }
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != ' ')
        {
            printf("%c", str2[i]);
        }
    }

    return 0;
}