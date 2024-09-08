// user se jab value chahiye to argument lagta hai

// #include <stdio.h>
// void printNumber();//konsa data type ka argument lena hai
// int main()
// {
//     printNumber();
//     return 0;
// }
// void printNumber(){//data type argument with value

//     for (int i = 1; i <= 100; i++)
//     {
//         printf("%d ", i);
//     }
// }

// Type-2

#include <stdio.h>
int printNumber(int);
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", printNumber(i));
    }

    return 0;
}
int printNumber(int n)
{
       return n;
}