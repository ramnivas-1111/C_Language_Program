#include <stdio.h>
int main()
{
    int i = 1, num, sum_even = 0, sum_odd = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + i;
        }
        else
        {
            sum_odd = sum_odd + i;
        }
        i++;
    }
    printf("%d %d\n", num, sum_even);
    printf("%d %d\n", num, sum_odd);
}
