// Write a program in C to display the cube of the number up to an integer.

// Test Data :

// Input number of terms : 5

// Expected Output :

// Number is : 1 and cube of the 1 is :1

// Number is : 2 and cube of the 2 is :8

// Number is : 3 and cube of the 3 is :27

// Number is : 4 and cube of the 4 is :64

// Number is : 5 and cube of the 5 is :125
// #include <stdio.h>
// int main()
// {
//     int i, num, sum ;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     for (i = 1; i <=num; i++)
//     printf("%d and cube of the %d is: %d\n",i,i,i * i * i);
//     return 0;
// }

// Write a program in C to display the multiplication table for a given integer.

// Test Data :

// Input the number (Table to be calculated) : 15

// Expected Output :

// 15 X 1 = 15

// ...

// ...

// 15 X 10 = 150

// #include <stdio.h>
// int main()
// {
//     int i, num;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     for (i = 1; i <=10; i++)
//     {
//         printf(" %d * %d = %d\n",num,i, num * i);
//     }
//     return 0;
// }

// Write a C program to display the sum of n terms of even natural numbers.

// Test Data :

// Input number of terms : 5

// Expected Output :

// The even numbers are :2 4 6 8 10

// The Sum of even Natural Number upto 5 terms : 30

// #include <stdio.h>
// int main()
// {
//     int i, num,sum=0;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     printf("The even numbers are");
//     for (i = 1; i <= num*2; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%3d",i);
//             sum+=i;
//         }
//     }
//   printf("\nSum=%d",sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, num, sum = 0;
//     printf("Enter the number");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         printf("1/%d",i);
//     }
//     return 0;
// }

// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

// Test Data :

// Input the number of terms : 5

// Expected Output :

// 1 + 11 + 111 + 1111 + 11111

// The Sum is : 12345

#include <stdio.h>
int main()
{
    int num, i, num1 = 0, sum = 0, r;
    printf("Enter the number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        num1 = num1 * 10 + 1;
        sum = sum + num1;
        if (i < num)
        {
            printf("%d+", num1);
        }
        else
        {
            printf("%d\n", num1);
            printf("The sum is:%d", sum);
        }
    }
    return 0;
}
