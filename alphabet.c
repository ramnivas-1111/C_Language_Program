#include <stdio.h>
int main()
{
    char character;
    printf("Enter the Character:");
    scanf("%c", &character);
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))

        printf("%c is Alphabet", character);
    else
        printf("%c Not an alphabet", character);
}
