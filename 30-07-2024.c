// Write a C program to check whether a Alphabet is vowel or consonant using Switch Case.

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter the character:");
//     scanf("%c", &ch);
//     if (ch >= 'A' && ch <= 'Z')
//         ch + 32;
//     if (ch >= 'a' && ch <= 'z')
//     {
//         switch (ch)
//         {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             printf("vowel");
//             break;
//         default:
//             printf("consanants");
//         }
//     }
//     else
//         printf("it is not consants");
// }

// Write a C to take the value from the user as input the month/
//  number and print number of days in that month. Using switch statement.
//

// #include <stdio.h>
// int main()
// {
//     int months;
//     printf("Enter the month:");
//     scanf("%d", &months);

//     switch (months)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 12:
//         printf("31 days");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         printf(" 30 days");
//         break;
//     case 2:
//         printf("28/29 days");
//         break;
//     default:
//         printf("Invalid Month");
//     }
// }

// Write a C program to check the number is even or odd by
// using Switch Case.

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number");
//     scanf("%d", &num);
//     switch (num%2== 0)
//     {
//     case 1:
//         printf("Even");
//         break;

//     default:
//         printf("odd");
//         break;
//     }
// }

// Write a C program to find the maximum between two numbers using Switch statement.

// #include<stdio.h>
// int main()
// {
//     int num_1,num_2;
//     scanf("%d%d",&num_1,&num_2);
//     switch (num_1>num_2 && num_2>num_1)
//     {
//     case 1:
//         printf("num_1 is maxium");
//         break;

//     default:
//         printf("num_2 is maxium");
//         break;
//     }
// }

// Write a C program to do a arithmetic operation on two numbers by using Switch Case.
//  Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.

// #include <stdio.h>
// int main()
// {
//     char ch;
//     int num_1, num_2;
//     printf("Enter the number 1:\n");
//     scanf("%d", &num_1);
//     printf("Enter the number 2:\n");
//     scanf("%d", &num_2);
//     printf("Enter the choices:\n");
//     scanf(" %c", &ch);

//     switch (ch)
//     {
//     case '%':
//         printf("%d", (num_1 % num_2 == 0));
//         break;

//     case '+':
//         printf("%d", (num_1 + num_2 ));
//         break;

//     case '-':
//         printf("%d", (num_1 - num_2 ));
//         break;

//     case '/':
//         printf("%d", (num_1 / num_2 ));
//         break;

//     }
// }

#include <stdio.h>
int main()
{
    int Phy, Che, Bio, Math, Comp, percentage, Total;
    printf("Enter the Physic number:");
    scanf("%d", &Phy);
    printf("Enter the Chemistry number:");
    scanf("%d", &Che);
    printf("Enter the Biology number:");
    scanf("%d", &Bio);
    printf("Enter the Mathematics number:");
    scanf("%d", &Math);
    printf("Enter the Computer number:");
    scanf("%d", &Comp);
    percentage = Phy + Che + Bio + Math + Comp;
    percentage = percentage / 5;
    switch (percentage / 10)
    {
    case 9:

        printf("Grade A");
        break;

    case 8:

        printf("Grade B");
        break;

    case 7:

        printf("Grade C");
        break;

    case 6:

        printf("Grade D");
        break;

    case 5:

        printf("Grade E");
        break;

    default :

        printf("Grade F");
        break;
    }
}

//     switch (percentage)
//     {
//     case 90 ... 100:

//         puts("Your grade is A");
//         break;

//     case 80 ... 89:
//      puts ("your grade is B");
//      break;

//      case 70 ... 79:
//      puts ("your grade is B");
//      break;

//      case 60 ... 69:
//      puts ("your grade is B");
//      break;

//      case 40 ... 59:
//      puts ("your grade is B");
//      break;

//     default:
//         puts("Grade f");
//         break;
//     }
// }



#include<stdio.h>
int main()
{
    int num_1,num_2;
    scanf("%d%d",&num_1,&num_2);
    switch(num_1>num_2 && num_2>num_1)
    {
    case 1:
        printf("num_1 is maxium");
        break;
        case 2:
        printf("num_2 is maxium");
    default:
        printf("equal");
    }
}
