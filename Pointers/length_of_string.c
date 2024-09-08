// Que 5 : Write a program in C to calculate the length of a string using a pointer.

// Sample input : NareshIt26

// Sample output : The length of the given string NareshIt26 is : 108

#include <stdio.h>
int main()
{
    char str[100],*p=&str[0];
    int i;
    printf("Enter the atring:");
    scanf("%[^\n]", str);

    printf("p adress in starting - > %u\n",p);
    for (; *p != '\0'; p++)
    {
    }
    printf("p adress - > %u\n",p);
    printf("p adress - > %u\n",p+9);
    printf("p adress - > %u\n",str);
    printf("%d", p-str);
    return 0;
}