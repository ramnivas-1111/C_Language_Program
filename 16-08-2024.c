
// #include <stdio.h>
// int main()
// {
//     int i, j, num, z;

//     printf("Enter the number:");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         int z = i;
//         for (j = 1; j <= num; j++)
//         {
//             if (i <= j)
//             {
//                 printf(" %d", z++);
//             }
//             else
//             {
//                 printf(" 0");
//                 z++;
//             }
//         }
//          printf("\n");
//     }

//     return 0;
// }

// 1

// 1 * 2

// 1 * 2 * 3

// 1 * 2 * 3 * 4

#include <stdio.h>
int main()
{
    int i, j, num, z;

    printf("Enter the number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        int z = 1;
        for (j = 1; j <= i + j; j++)
        {
            printf("%d", z);
        }
        printf("\n");
    }

    return 0;
}
