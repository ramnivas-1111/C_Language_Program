// Write a C program that takes a number as input from the user and determines whether it is a spy number of not, DEVELOP this by using while loop.

// A Spy number is a number where the sum of its digits is equal to its product of its digits.

// For Example : 

// 1124 is a spy number , because the sum of its digits is 1+1+2+4 = 8 and product of its digits is equal to 1*1*2*4 = 8


// #include <stdio.h>

// int main() {
//  int n=1124,rev=0;
//  while(n!=0)
//  {
//      int rem=n%10;
//      rev=rev*10+rem;
//      n/=10;
//  }
//  while(rev!=0)
//  {
     
//      printf("%d",(rev%10));
//      rev/=10;
    
//  }
//     return 0;
// }


// Write a C program to find the given number is a step number or not.

// If the adjacent digit difference is 1 then it is a step number.

// Example as: 1234

// o/p : It is a step number.

// Test cases you have to check: 

// 1234, 4321, 5432, 3210,10 are step numbers.

// 1001,12234 are not step numbers.

// #include <stdio.h>
// int main(){
//     int num,r1,r;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     while(num)
//     {
//       r=num%10;
//       num=num/10;  
//     }
// return 0;
// }


#include<stdio.h>
#include<math.h>
int main(){
    int n,m,c=0,r,s=0;
    printf("Enter the no ");scanf("%d",&n);
    m=n;
    while(m!=0){
        c++;
        m=m/10;
    }
    m=n;
    while(m){
        r=m%10; s+=pow(r,c);m=m/10;
    }
        // printf("%d %d %d %d",m,n,s,c);
    printf(n==s?"Aramstrong no" : "Not An Armstrong no");

    // printf(n==s?"Aramstrong no" : "Not An Armstrong no");
}

















