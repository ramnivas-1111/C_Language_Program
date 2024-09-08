#include <stdio.h>
int main()
{
    char str[20];
    int i, alpha;
    alpha = 0;
    printf("Enter the String ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z')
        {
            alpha++;
        }
    }
    printf("alphabet count is: %d",alpha);
}