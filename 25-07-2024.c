#include <stdio.h>
int main()
{
    char ch, ch2;
    int age;
    printf("Enter the nationality:");
    scanf(" %c", &ch);
    // scanf("%c", &ch2);
    // scanf("%d", &age);

    if (ch == 'I' || ch == 'i')
    {
        printf("Indian\n");
    }
    else
    {
        printf("not indian");
        goto end;
    }
    printf("Enter the Gender:");
    scanf(" %c", &ch2);
    if (ch2 == 'M' || ch2 == 'm')
    {
        printf("Male\n");
    }
    else if (ch2 == 'F' || ch2 == 'f')
    {
        printf("Female\n");
    }else{

    }
    printf("Enter the age:");
    scanf("%d", &age);
    if (age > 21 && age < 50)
    {
        printf("Congratulation! you are eligible for marriage\n");
    }
    else if (age > 18 && age < 45)
    {
        printf("congrulation! you are eligible for marriage");
    }
    else
    {
        printf("Sorry! you are not eligible for marriage");
    }
end:
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int Type, age, Type_2, Tyre, cost, fuels, engine, general;
//    char name[30], vechile[50];
//     printf("Enter the owner:");
//     gets(name);
//     printf("Enter the vechile name:");
//     gets(vechile);

//     printf("Enter the vehicle is 2 Wheller ,3 Wheller & 4 Wheller:");
//     scanf("%d", &Type);
//     if (Type == 2 || Type == 3 || Type == 4)
//     {
//         printf("Enter the vehicle age : ");
//         scanf("%d", &age);
//         if (age > 8)
//         {

//             puts("Enter 1 for tyre problem");
//             puts("Enter 2 for fuel problem");
//             puts("Enter 3 for engine issue");
//             puts("Enter 4 for general services");
//             scanf("%d", &Type_2);

//             if (Type_2 == 1 || Type_2 == 2 || Type_2 == 3 || Type_2 == 4)
//             {
//                 if (Type_2 == 1)
//                 {
//                     printf("how many tyres you are facing the issue ? no of tyres\n");
//                 scanf("%d", &Tyre);
//                 if (Tyre >= 1 && Tyre <= Type)
//                 {
//                     cost = 400 * Tyre;
//                     printf("Your bill is:cost = %d", cost);
//                 }
//                 else
//                 {
//                     printf("Invalid number of tyres");
//                 }
//                 }
//             }

//             if (Type_2 == 2)
//             {
//                 cost = 1500 ;
//                 printf("Your bill is:cost = %d", cost);
//             }
//               if (Type_2 == 3)
//             {

//                 cost = 5000;
//                 printf("Your bill is:cost = %d", cost);
//             }
//              if (Type_2 == 4)
//             {

//                 cost = 1000 ;
//                 printf("Your bill is:%d", cost);
//             }
//         }
//         else
//         {
//             printf("your vehicle servie will done after a while");
//         }
//     }
//     else
//     {
//         printf("this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
//     }

// }
