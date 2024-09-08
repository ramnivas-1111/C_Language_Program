// 1)// Write a C program that prompts the user to enter a number and then
//  prints the multiplication table for that number using a while loop.

// #include <stdio.h>
// int main()
// {
//     int num, i = 1,table;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     while (i <= num)
//     {
//         printf("%d * %d = %d\n",num,i , num * i);
//         i++;
//     }
//     return 0;
// }

// 2) Write a C program to generate the Fibonacci sequence up to a given times using a while loop. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. The program should prompt the user to enter a positive integer and then print the Fibonacci sequence up to that number.

// Input as:

// Enter how many Fibonacci series you want : 9

// Output as:

// 0 1 1 2 3 5 8 13 21

// #include <stdio.h>
// int main(){
//    int num,i=1,a=0,b=1,c;
//    printf("Enter how many Fibonacci series you want :");
//    scanf("%d",&num);
//    while(num>=i)
//    {
//     printf("%d  ",a);
//     c=a+b;
//     a=b;
//     b=c;
//     i++;
//    }
// return 0;
// }

// 3) Write a C program to check if a given number is a palindrome. A palindrome is a number that remains the same when its digits are reversed. For example, 121, 454 and 767 are palindromic numbers. The program should prompt the user to enter a positive integer and determine whether it is a palindrome or not.

// Input as:

// Enter a number : 121

// Output as:

// 121 is a Palindrome number.

// #include <stdio.h>
// int main()
// {
//     int num,mod, rev = 0, n;
//     printf("Enter the number:");
//     scanf("%d", &num);n=num;
//     while (num)
//     {
//         mod= num % 10;
//         rev = rev * 10 + mod;
//         num = num / 10;
//     }
//      if(rev==n)
//     {
//         printf("palindrome");
//     }
//      else
//      {
//         printf("It is not palindrome");
//      }
//     return 0;
// }

// 4) Write a C program to check the given number is a perfect number or not?

// If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.

// 6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6

// 6 is a perfect number.

// #include <stdio.h>
// int main()
// {
//     long int num, i = 1, sum = 0;
//     printf("Enter the number:");
//     scanf("%ld", &num);
//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             sum = sum + i;
//         }
//         i++;
//     }
//     if (sum == num)
//     {

//         printf("Perfect number");
//     }
//     else
//     {
//         printf("Not a perfect number");
//     }
//     return 0;
// }

// 5.) Write a C program to check if a given number is a strong number.
// A strong number is a positive integer in which the sum of the factorial of its digits is equal to the number itself.
//  For example, 145 is a strong number since 1! + 4! + 5! = 145. The program should prompt the user to enter a positive integer and
//   determine whether it is a strong number or not.

// Input as:

// Enter a number : 145

// Output as:

// 145 is a strong number.

// 1)// Write a C program that prompts the user to enter a number and then
//  prints the multiplication table for that number using a while loop.

// #include <stdio.h>
// int main()
// {
//     int num, i = 1,table;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     while (i <= num)
//     {
//         printf("%d * %d = %d\n",num,i , num * i);
//         i++;
//     }
//     return 0;
// }

// 2) Write a C program to generate the Fibonacci sequence up to a given times using a while loop. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. The program should prompt the user to enter a positive integer and then print the Fibonacci sequence up to that number.

// Input as:

// Enter how many Fibonacci series you want : 9

// Output as:

// 0 1 1 2 3 5 8 13 21

// #include <stdio.h>
// int main(){
//    int num,i=1,a=0,b=1,c;
//    printf("Enter how many Fibonacci series you want :");
//    scanf("%d",&num);
//    while(num>=i)
//    {
//     printf("%d  ",a);
//     c=a+b;
//     a=b;
//     b=c;
//     i++;
//    }
// return 0;
// }

// 3) Write a C program to check if a given number is a palindrome. A palindrome is a number that remains the same when its digits are reversed. For example, 121, 454 and 767 are palindromic numbers. The program should prompt the user to enter a positive integer and determine whether it is a palindrome or not.

// Input as:

// Enter a number : 121

// Output as:

// 121 is a Palindrome number.

// #include <stdio.h>
// int main()
// {
//     int num,mod, rev = 0, n;
//     printf("Enter the number:");
//     scanf("%d", &num);n=num;
//     while (num)
//     {
//         mod= num % 10;
//         rev = rev * 10 + mod;
//         num = num / 10;
//     }
//      if(rev==n)
//     {
//         printf("palindrome");
//     }
//      else
//      {
//         printf("It is not palindrome");
//      }
//     return 0;
// }

// 4) Write a C program to check the given number is a perfect number or not?

// If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.

// 6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6

// 6 is a perfect number.

// #include <stdio.h>
// int main()
// {
//     long int num, i = 1, sum = 0;
//     printf("Enter the number:");
//     scanf("%ld", &num);
//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             sum = sum + i;
//         }
//         i++;
//     }
//     if (sum == num)
//     {

//         printf("Perfect number");
//     }
//     else
//     {
//         printf("Not a perfect number");
//     }
//     return 0;
// }

// 5.) Write a C program to check if a given number is a strong number.
// A strong number is a positive integer in which the sum of the factorial of its digits is equal to the number itself.
//  For example, 145 is a strong number since 1! + 4! + 5! = 145. The program should prompt the user to enter a positive integer and
//   determine whether it is a strong number or not.

// Input as:

// Enter a number : 145

// Output as:

// 145 is a strong number.

#include <stdio.h>
int main()
{
    int num, f ,  m, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    int t=num;
    while (num > 0)
    {
        m = num % 10;
         f=1;
        while (m > 0)
        {
            f = f * m;
            m--;
        }
        sum += f;
        num = num / 10;
    }
    if(t==sum)
    {
        printf("Strong no");
    }else
    {
        printf("Not Strong no");
    }
    printf("%d",sum);
}

