// Write a C program to check the given number is a prime number or not.

// Input as :

// Enter a number : 13

// Expected Output :

// 13 is a Prime Number.

// #include <stdio.h>
// int main()
// {
//     int i, num, c = 0;
//     printf("Enter the number");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         if (num % i== 0)
//         {
//             c++;
//         }
//     }
//     if (c == 2)
//         {
//             printf("It is prime");
//         }
//         else
//         {
//             printf("it is not prime");
//         }

//     return 0;
// }

// Write a C program to add all the digits present in a given number until it became a single digit. Develop it by using while loop.

// [if the number is 5678, sum of digit =5+6+7+8=26 , again sum of digit of the sum : 2+6=8]

// Input as : 5678

// Ouput as : 8

// #include <stdio.h>
// int main()
// {
//     int num, m, s = 0;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     while (num > 9)
//     {
//         for (s = 0; num != 0; num = num / 10)
//         {
//             m = num % 10;
//             s = s + m;
//         }
//         num = s;
//         printf("sum of digit:%d\n", s);
//     }
//     printf("again sum of digit of the sum:%d\n", s);

//     return 0;
// }

// Write a C program to check the given number is perfect number or not .A perfect number is a positive integer that is equal to the sum of its proper divisors(excluding itself).

//                                                                      Input as :

//     Enter a number : 28

//     Output as :

//     28 is a Perfect Number

#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter the nu    mber:");
    scanf("%d", num);
    for (i = 1; num / 2; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    printf("%d", sum);      

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n1, n2, i,hcf;
//     printf("Enter the number a and b");
//     scanf("%d%d", &n1, &n2);
//     for(i=0;i<n1 && i<n2;i++)
//     {
//         if(n1%i==0 && n2%i==0)
//         {
//         hcf=i;
//         }
//     }
//     return 0;
// }