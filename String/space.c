// remove all the Spaces from a given String.
// Write a C program to remove all the Spaces from a given String.
// Sample Input
// Input as :

// Enter a String : Black cat on a mat
// Sample Output
// Expected output : Blackcatonamat

#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, j = 0;
    printf("Enter your first name:");
    gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if ((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= '0' && s1[i] <= '9'))
        {
            s2[j++] = s1[i];
        }
    }
    s2[j] = '\0';
    printf("%s", s2);
    return 0;
}