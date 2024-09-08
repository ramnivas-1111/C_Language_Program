//  Write a program in C to store n elements in an array and print the elements using a pointer.

// Sample input :

// Input the number of elements to store in the array :5

// Input 5 number of elements in the array :

// element - 0 : 5
// element - 1 : 7
// element - 2 : 2
// element - 3 : 9
// element - 4 : 8

// Sample output :
// The elements you entered are :

// element - 0 : 5
// element - 1 : 7
// element - 2 : 2
// element - 3 : 9
// element - 4 : 8

#include <stdio.h>
int main()
{
    int arr[50], num, i;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &num);
    printf("Input %d number of elements in the array :\n", num);
    for (i = 0; i < num; i++)
    {
        printf("Elements-%d:", i);
        scanf("%d", &arr[i]);
    }

    int *p=arr; //*p=&arr[0]  //0 index ka address array ke andar he store rehta hai
    printf("The elements you entered are:\n");
    for (i = 0; i < num; i++)
    {
        printf("element-%d:%d\n",i,*(p+i)); //* least priority than bracket
    }

    return 0;
}