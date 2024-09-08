// Convert UpperCase
// Write a C program to convert all the character to upper case

// from a given index to end index. If the given index is not available then print

// Index is not available.
// Sample Input
// Input as :

// Enter a String : I am a student

// Enter the starting index number : 4

// Enter the ending index number : 13
// Sample Output
// Expected output :

// Resulting String is : I am A STUDENT

#include <stdio.h>
int main()
{
    char str[100];
    int i, length, start, last;
    printf("Enter the array:");
    scanf("%[^\n]", str);
    printf("Enter the last index");
    scanf(" %d", &start);
    printf("Enter the starting index:"); // I am a student
    scanf("%d", &last);

    for (length = 0; str[length] != '\0'; length++);

    if (start >= 0 && start <= length && start < last && last <= length)
    {
        for (i = start; i <= last; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z') 
            {
                str[i] -= 32;
            }
        }
        printf("%s", str);
    }
    else
    {
        printf("Index is not avilable");
    }
}