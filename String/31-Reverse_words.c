// Reverse Words
// Write a C program to reverse Words of the Given String?
// Sample Input
// input as : Today is Monday
// Sample Output
// Output: yadoT si yadnoM
#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    printf("Enter the string:");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\0'; j++)
            if (str[i] == ' ')
            {
                for (int k = j; k > i; k--)
                {
                    printf("%c", str[k]);
                }
            }
    }
    // {
    //     for (i--; i >= 0; i--)
    //     {
    //         printf("%c", str[i]);
    //     }
    // }
    return 0;
}