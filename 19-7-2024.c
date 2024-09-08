#include <stdio.h>
int main()
{
    char character;
    printf("Enter the Character:");
    scanf("%c", &character);
   (character >= 'A' && character <= 'Z') || (character >='a' && character <='z')?printf("%c is Alphabet",character):printf("%c Not an alphabet",character);
}

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number:");
// //     scanf("%d", &num);
// //     num % 2==0 ? printf("even") : printf("odd");
// // }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//    (n %5==0 && n%11==0) ? printf(" divisible by both 5 and 11") : printf(" not divisible ");

// }

// #include<stdio.h>
// int main()
// {
//     char character;
//     printf("Enter the character");
//     scanf("%c",&character);
//     character=='A'|| character=='E' ||  character=='I' ||  character=='O' ||  character=='U' ||  character=='a'|| character=='e' ||  character=='i' ||  character=='o' ||  character=='u' ? printf("%c is vowel:",character): printf("%c is constant:",character);
// }

// 4)Find Smallest Number
// Write a c Program to find the Smallest number among three different number using ternary operator

// Sample Input
// 10
// 20
// 5

// Sample Output
// 5 is smallest

// }
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the number a,b and c");
//     scanf("%d%d%d",a,b,c);

//     (a<b && a<c || b<a && b<c) ? printf("")
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number");
//     scanf("%d", &num);
//     if (num % 2 == 0)
//     {
//         printf("even");
//     }
//     if(num%2==!0)
//     {
//     printf("odd");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int n, a;
//     printf("Enter First the number");
//     scanf("%d", &n);
//     printf("Enter the 2nd number");
//     scanf("%d", &a);
//     if (n == a)
//     {
//         printf("equal");
//     }
//     if (n == !a)
//     {
//         printf("Not Equal");
//     }
// }




#include<stdio.h>
int main(){
    int hour;
    printf("Enter the hour :");
    scanf("%d",&hour);
    if(hour>=0 && hour<=11){
        printf("Good morning");
    }if(hour>=12 && hour<=16){
        printf("Afternoon");
    }if(hour>=16 && hour<=18){
        printf("Evening");
    }if(hour>=18 && hour<=23){
        printf("Night");
     }

}