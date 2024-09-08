// Concat two String
// Write a C program to combine two string in a single String.
// Sample Input
// Input as :

// Enter first String : Naresh

// Enter Second String : it
// Sample Output

// Expected output :

// Resulting String is : Nareshit

#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int i,j;
    printf("Enter first string:");
    scanf("%[^\n]", s1);
    printf("Enter second string:");
    scanf(" %[^\n]", s2);
    for (i = 0; s1[i] != '\0'; i++)

    for(j=0;s2[j]!='\0';j++)
    {
       s2[j]=s1[i];
    }

    printf("%s", s2);
    return 0;
}