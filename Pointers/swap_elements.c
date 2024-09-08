// 4 : Write a program in C to swap elements using call by reference.
// -> create int main() function.
// -> create void swap(int *a, int *b, int *c) function.
// -> in main function read value for a,b,c and call the swap fuction by passing addresses of all three variable.
// -> NOTE : print the result before swap and after swap in main funtion only and understand the use/power of pointer.

// Sample input : a = 5 , b = 6 , c = 7;

// Sample output :

// The value before swapping are :                                        
// a = 5                                                 
// b = 6                                                 
// c = 7                                                          
// The value after swapping are :                                      
// a = 7                                                 
// b = 5                                                 
// c = 6 


#include <stdio.h>
int main(){
    int a,b,c,temp;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("Enter the value:");
    scanf("%d",&b);
    printf("Enter the value:");
    scanf("%d",&c);
    printf("The valu e before swapping are : ");
return 0;
}