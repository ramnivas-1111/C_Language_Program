// Reverse of a given String
// Write a C program to print the reverse of a given String .
// Sample Input
// Input as :

// Enter a String : NareshIT
// Sample Output
// Output as :

// The reverse of the String is : TIhseraN

#include <stdio.h>
int main()
{
    char str[100];int i;
    printf("Enter the array:");
    scanf("%[^\n]", str);
    printf("%s\n",str);
    for (i = 0; str[i] != '\0'; i++)
    { 
           
    }

    printf("length = %d\n",i);
    for(i--;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}