// 1)Express a	s Sum Of prime
// Write a program in C to check whether a number can be expressed as the sum of two prime.

// Sample Input
// Input as: 16
// Sample Output
// Output :

// 16 = 3 + 13

// 16 = 5 + 11

// #include <stdio.h>

// int main()
// {
//     int n = 16;
//     int c, c1, d;
//     for (int i = 2; i < n / 2; i++)
//     {
//         c = 0, c1 = 0, d = n - i;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 c++;
//                 break;
//             }
//         }
//         for (int j = 2; j < d; j++)
//         {
//             if (d % j == 0)
//             {
//                 c1++;
//                 break;
//             }
//         }
//         if (c == 0 && c1 == 0)
//         {
//             printf("%d=%d+%d\n", n, i, d);
//         }
//     }

//     return 0;
// }

// 2)Automorphic number
// Write a program to check given number is Automorphic number or not.

// Sample Input
// input =25
// Sample Output
// 25 is Automorphic number.

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int num, digit = 0, flag = 1;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     int square = num * num;
//     int store_num = num;
//     while (store_num)
//     {
//         digit++;
//         store_num /= 10;
//     }

//     // printf("num = %d\n",num);
//     // printf("store_num = %d\n",store_num);
//     store_num = num;
//     // printf("num = %d\n",num);
//     // printf("store_num = %d\n",store_num);

//     for (int i = 1; i <= digit; i++)
//     {

//         if (num % 10 != square % 10) // 1!=2
//         {
//             flag = 0;
//             break;
//         }
//         num /= 10;
//         square /= 10;
//     }

//     if (flag)
//     {
//         printf("%d is an Automorphic number", store_num);
//     }else{
//         printf("%d isn't an Automorphic number", store_num);

//     }

//     return 0;
// }

// 3)All Prime Number
// Write a program in C to find the prime Numbers Between the given range 100 to 999
// Sample Input
// -
// Sample Output

// #include <stdio.h>
// int main()
// {
//     int num, i, j, c;
//     // printf("Enter the number:");
//     // scanf("%d", &num);
//     for (i = 100; i <= 999; i++)
//     {
//         c = 1;
//         for (j = 2; j <=i; j++)
//         {
//             if (i % j == 0)
//             {
//                 c++;
//             }
//         }
//         if (c == 2)
//         {
//             printf("%4d ", i);
//         }
//     }

//     return 0;
// }

// 4)Find All Armstrong Number
// Write a C program to find all Armstrong numbers between 100 to 999.
// Sample Input
// 153
// Sample Output
// 153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.

// #include <stdio.h>
// int main()
// {
//     int r, i, j, n, m;
//     printf("This is the armstrong number:\n");
//      for (i = 100; i <= 999; i++)
//     {
//         int s = 0;
//         for (j = i; j > 0; j /= 10)
//         {
//             r = j % 10;
//             s = s + r * r * r;
//         }
//         if (s == i)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

// 5)Strong Number
// Write a C program to find all strong numbers between 1 to 500.

// Sample Input
// input =145
// Sample Output
// 145 is Strong number

// #include <stdio.h>
// int main()
// {
//     int f, i, j, r, sum;
    
//     for (i = 1; i <= 500; i++)
//     {
//         sum=0;
//         for (j = i; j > 0; j /= 10)
//         {
//             r = j % 10;
           
//             for(f=1;r>0;r--)
//             { // 5
//             f = f * r;
//             }
//             sum+=f;  
//         }
//         if (sum == i)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }
