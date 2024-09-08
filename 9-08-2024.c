// Write a C program to print square pattern program using *

// * * * * *

// * * * * *

// * * * * *

// * * * * *

// * * * * *

// #include <stdio.h>
// int main()
// {
//     int i, j,row,col;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//             printf(" * ");
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

// Write a C program to print square pattern program

// 1 1 1 1 1

// 2 2 2 2 2

// 3 3 3 3 3

// 4 4 4 4 4

// 5 5 5 5 5

// #include <stdio.h>
// int main()
// {
//     int i, j,row,col;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//             printf("%2d",i);
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

// Write a C program to print square pattern program

// 1 2 3 4 5

// 1 2 3 4 5

// 1 2 3 4 5

// 1 2 3 4 5

// 1 2 3 4 5

// #include <stdio.h>
// int main()
// {
//     int i, j, row, col;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//             printf("%2d", j);
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

// Write a C program to print square pattern program

//    1   3   5   7  9

//   11 13 15 17 19

//   21 23 25 27 29

//   31 33 35 37 39

// #include <stdio.h>
// int main()
// {
//     int i, j, row, col,k=1;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++){
//             printf("%3d", k);
//             k+=2;}
//         printf("\n");
//     }
//     return 0;
// }

// Write a C program to print square pattern program

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// #include <stdio.h>
// int main()
// {
//     int i, j, row, col,k=1,c;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++){

//             if(j%2==0)
//             {
//                printf("%3d",0);
//             }
//             else{
//             printf("%3d", i);
//             }

//         }
//         printf("\n");

//     }
//     return 0;
// }

// Write a C program to print square pattern program

//   2  4  6   8   10

// 12 14 16 18 20

// 22 24 26 28 30

// 32 34 36 38 40

// 42 44 46 48 50

// #include <stdio.h>
// int main()
// {
//     int i, j, row, col, k=0;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             printf("%3d", k+=2);
//             // k += 2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Write a C program to print square pattern program

//   1 1 2 1 3 1

//   1 2 2 2 3 2

//   1 3 2 3 3 3

//   1 4 2 4 3 4

//   1 5 2 5 3 5

// Write a C program to print square pattern program

// 1 2   3    4    5

// 2 4   6    8   10

// 3 6   9   12  15

// 4 8  12  16  20

// 5 10 15 20  25

// #include <stdio.h>
// int main(){
//   int i, j, row, col;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             printf(" %d", i*j);
//         }
//         printf("\n");
//     }
// return 0;
// }

// Write a C program to print square pattern program

//   1 6 11 16 21

//    2 7 12 17 22

//    3 8 13 18 23

//    4 9 14 19 24

//    5 10 15 20 25

// #include <stdio.h>
// int main(){
//   int i, j, row, col;
//     printf("Enter the row:");
//     scanf("%d", &row);
//     printf("Enter the column:");
//     scanf("%d", &col);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             printf(" %d", j+5);
//         }
//         printf("\n");
//     }
// return 0;
// }

