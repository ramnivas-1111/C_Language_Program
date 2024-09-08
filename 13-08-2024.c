// 1

// 2  3

// 4  5  6

// 7  8  9  10

// 11 12 13 14 15

// #include <stdio.h>
// int main()
// {
//     int i, j,row,col,a=1;

//     printf("Enter the number:");
//     scanf("%d", &row);
//     printf("Enter the number:");
//     scanf("%d", &col);

//     for ( i = 1; i <= row; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf(" %d ", a);
//             a++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Write a logic for the following pattern in c?

// 1

// 2 3

// 3 4 5

// 4 5 6 7

// 5 6 7 8 9

// #include <stdio.h>
// int main()
// {
//     int i, j, row, col;

//     printf("Enter the number:");
//     scanf("%d", &row);
//     printf("Enter the number:");
//     scanf("%d", &col);

//     for (i = 1; i <= row; i++)
//     {
//         int a = i;
//         for (j = 1; j <= i; j++)
//         {
//             printf(" %d ", a);
//             a++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 1

// 1  2

// 3  5  8

// 13 21 34 55

// #include <stdio.h>
// int main()
// {
//     int i, j, row, col, c,a=0,b=1;

//     printf("Enter the number:");
//     scanf("%d", &row);
//     printf("Enter the number:");
//     scanf("%d", &col);

//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             c = a+b;
//             printf(" %d ", b);
//             a=b;
//             b=c;
//             // a++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

//     0

//     1 0

//     0 1 0

//     1 0 1 0

//     0 1 0 1 0

// #include <stdio.h>
// int main()
// {
//     int i, j, row, col;

//     printf("Enter the number:");
//     scanf("%d", &row);
//     printf("Enter the number:");
//     scanf("%d", &col);

//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 printf(" 0 ");
//             }
//             else{
//                  printf(" 1 ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, row, col, a, b, c;

    printf("Enter the number:");
    scanf("%d", &row);
    printf("Enter the number:");
    scanf("%d", &col);

    for (i = 1; i <= row; i++)
    {
        a = 0, b = 1, c;
        for (j = 1; j <= i; j++)
        {
            c=a+b;
            printf("%d", a);
            a=b;
            a=c;
        
        }
        printf("\n");
    }

    return 0;
}