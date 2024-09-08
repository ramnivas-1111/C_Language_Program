#include <stdio.h>
int main()
{
   int length_of_sides1, length_of_sides2, length_of_sides3;
   printf("Enter the sides:");
   scanf("%d%d%d", &length_of_sides1, &length_of_sides2, &length_of_sides3);

   if (length_of_sides1 + length_of_sides2 > length_of_sides3 &&
       length_of_sides2 + length_of_sides3 > length_of_sides1 &&
       length_of_sides1 + length_of_sides3 > length_of_sides2)
   {
      printf("triangle is valid");
   }
   else
   {
      printf("Triangle is not valid");
   }
   return 0;
}

// Write a C program by taking one integer value from the user, if the given number's

// last digit is smaller than 5 then print the square of that number else print that

// same number.

// Case-1:

// Enter a number : 12

// Output is :

// 144

// #include<stdio.h>
// int main()
// {
//    int n,a;
//    printf("Enter the number");
//    scanf("%d",&n);
//    a=n%10;
//    if(a<5)
//    {
//       printf("%d",n*n);
//    }
// }

// #include<stdio.h>
// int main()
// {
//     int first,second;
//     scanf("%d%d",&first,&second);
//     if(first%second==0)
//     {
//         printf("%d is divisible by %d",first,second);
//     }
//     else{
//         printf("%d is not divisible by %d",first,second);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//    int hour, minutes;
//    scanf("%d%d", hour, minutes);
//    if (hour > 0 && hour < 12 && minutes > 0 && minutes < 60)
//    {
//       printf("The time is%d%d", hour, minutes);
//    }
//    else{
//       printf("The time is")
//    }
// }

// #include<stdio.h>
// int main()
// {
//     int avg,Hindi,English,Math,Sanskrit,Science;
//     scanf("%d%d%d%d%d",&Hindi,&English,&Math,&Sanskrit,&Science);
//     avg=Hindi+English+Math+Sanskrit+Science/5;
//     if(avg>=90)
//     {
//         printf("Grade A");
//     }
//     else if(avg>=80)
//     {
//         printf("Grade B");
//     }
//     else if(avg>=70)
//     {
//         printf("Grade C");
//     }
//     else if(avg>=50)
//     {
//         printf("Grade D");
//     }
//     else if(avg<=50)
//     {
//         printf("Grade F");
//     }

// }


#include<stdio.h>
int main()
{
    int num;
printf("Enter the number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive");
    }
    else if(num<0)
    {
        printf("negative");
    }
    else if(num==0)
    {
        printf("Zero");
    }
}



#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0||year%400==0)
    printf("leap year");
    else{
        printf("not leap yaer");
    }
}