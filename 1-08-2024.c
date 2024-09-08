//  Write a C program that asks the user to input a three-digit integer and calculates the sum of its digits. Using While loop.

// Input as :

// Enter a three digit number : 123

// Output as :

// Sum of the digits : 6

// #include <stdio.h>
// int main()
// {
//     int num, sum = 0, n;
//     printf("Enter the Digit:");
//     scanf("%d", &n);
//     while (n)
//     {
//         num = n % 10;
//         sum = sum + num;
//         n = n / 10;
//     }
//     printf("%d", sum);
// }

// Write a C program that asks the user to input an integer and count the digts and print the count of the digits.

// Input as :

// Enter a number : 546

// Output as :

// Count of the digits is : 3

// #include <stdio.h>
// int main()
// {
//     int num, count = 0, n;
//     printf("Enter the Digit:");
//     scanf("%d", &n);
//     while (n)
//     {
//         num = n % 10;
//         count++;
//         n = n / 10;
//     }
//     printf("%d", count);
// }

// Write a C program to add all the natural number from 1 to n. 
// Ask the user to give n value and print the addition value.

// Input as :

// Enter n value : 10

// Output as :

// Sum of the natural number from 1 to 10 : 55

// #include <stdio.h>
// int main()
// {
//     int i =1,num,sum=0;
//     printf("Enter the Digit:");
//     scanf("%d", &num);
//     while (i <= num)
//     {
//         sum = sum + i;
//           i++;
//     }
//     printf("%d", sum);
// }


// input as : 

// Enter a number : 123

// Output as : 

// Reverse of the given number is : 321

// Case -2

// Input as :

// Enter a number : 2314

// Output as : 

// Reverse of the given number is : 4132Write a C prgram that asks the user to input an integer and reverse that number and display the reverse of that given number.

// Case-1


// #include <stdio.h>
// int main()
// {
//     int num,n;
//     printf("Enter the Digit:");
//     scanf("%d", &num);
//     do
//     {
//        n=num%10;
//        printf("%d",n); 
//        n=n/10;
//     }while(n);
// }


// write a C program to find the factorial of a given number. Take the input from the user.

// Input as :

// Enter a number : 5

// Output as :

// Factoria of 5 : 120


#include <stdio.h>
int main()
{
   int i =1,num,Factorial=1;
    printf("Enter the Digit:");
    scanf("%d", &num);
    while (i <= num)
    {
        Factorial = Factorial * i;
          i++;
    }
    printf("%d", Factorial);
}
#include <stdio.h>
int main(){
  
return 0;
}