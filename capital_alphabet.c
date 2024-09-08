// Given string contains a capital alphabet, small alphabet, special character and digit.
//  Write a C program to check the given string contains a capital alphabet, small alphabet, special character and digit.
// Sample Input
// Input as :

// Enter a String : Nareshit@123

// Input as :

// Enter a String : nareshit
// Sample Output
// Expected output :

// The given String is matching to our cases.

// Expected output :

// The given String is not matching to our cases

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the array:");
    scanf("%[^\n]",str);
    int capit = 0, small = 0, sp = 0, digit = 0;
    for (i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capit++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
           sp++;
        }
    }
    if(capit && small && digit && sp)
    {
        printf("The given String is matching to our cases.");
    }
    else 
    {
      printf("The given String is not matching to our cases");
    }
    return 0;
}
