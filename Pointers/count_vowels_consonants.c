//  Write a program in C to count the number of vowels and consonants in a string using a pointer.

// Sample input : string

// Sample output :

// Number of vowels : 1
// Number of constant : 5

// alt+ s copy particular word:
// alt+z

#include <stdio.h>
int main()
{
    char str[50],*p=str;
    int i, vowel = 0, cons = 0;
    printf("Enter the string:");
    scanf("%[^\n]", str);
    for (i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) >= 'A' && *(p + i) <= 'Z' || *(p + i) >= 'a' && *(p + i) <= 'z')
        {
            if (str[i] == 'A' || *(p + i) == 'E' || *(p + i) == 'I' || *(p + i) == 'O' || *(p + i) == 'U' || *(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u')
            {
                vowel++;
            }
            else
            {
                cons++;
            }
        }
    }
    printf("vowel:%d\n constant:%d", vowel, cons);
    return 0;
}