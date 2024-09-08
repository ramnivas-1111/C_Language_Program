// #include <stdio.h>
// int main()
// {
//     int num, fact = 1;
//     printf("Enter number : ");
//     scanf("%d", &num);

//     while (num)
//     {
//         fact *= num--;
//     }

//     printf("Factorial : %d",fact);
//     return 0;
// }

#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    printf("Factorial : %d",factorial(num));
    return 0;
}
int factorial(int num){
    int fact=1;
    while (num)
    {
        fact *= num--;
    }
    return fact;
}

