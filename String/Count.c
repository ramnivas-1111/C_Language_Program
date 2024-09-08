// Count
// Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .
// Sample Input
// Enter a String : Nareshit @123
// Sample Output
// Output as :

// Vowel count is : 3

// Consonant count is : 5

// Digit count is : 3

// Special Character count is : 1

#include <stdio.h>
int main()
{
    char str[20];
    int i, cons, vowel, digit, space, sp;
    cons = vowel = digit = space = sp = 0;
    printf("Enter the String ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel++;
            }
            else
            {
                cons++;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            sp++;
        }
    }
    printf("Vowel count is:%d\nalphabet count is:%d\n digit count is:%d\n space count: %d\nspecial character count is:%d", vowel, cons, digit, space, sp);
    return 0;
}
