// Write a C program to accept id from user and display department.

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

//   21 to 23 is Management department

// #include<stdio.h>
// int main()
// {
//     int id;
//     printf("Enter the id:");
//     scanf("%d",&id);
//     switch(id)
//     {
//      case 11 ... 15:
//      printf("Software departement");
//      break;

//      case 16 ... 20 :
//      printf("Developer departement");
//      break;

//      case 21 ... 23 :
//      printf("management departement");
//      break;
//      default :printf("Invalid departement");
//     }
// }

// Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. The program will print the winner’s name and also print by how many

// points that person won by comparing the scores. Develop this program by using switch case.

// #include <stdio.h>
// int main()
// {
//     char name_1[100], name_2[100];
//     int Score_1 = 0, Score_2 = 0;
//     printf("Enter the Name:");
//     scanf("%s", name_1);
//     printf("Enter the Score:");
//     scanf("%d", &Score_1);
//     printf("Enter the Name:");
//     scanf("%s", name_2);
//     printf("Enter the Score:");
//     scanf("%d", &Score_2);

//     switch (Score_1 > Score_2)
//     {
//     case 1:
//         printf("%s won with %d points", name_1, (Score_1 - Score_2));
//         break;
//     case 0:
//     {
//         switch (Score_1 == Score_2)
//         {
//         case 1:
//             printf("Both scores are equal..");
//             break;
//         case 0:
//             printf("%s won with %d points", name_2, (Score_2 - Score_1));
//             break;
//         }
//     }
//     break;
//     }
// }

// Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to enter his id, if the id is valid

// then ask the user to enter his password ,if the password is correct then print the name of the user, otherwise

// the program will print incorrect Passoword and if the Id doesnot exits, the program will print Incorrect Id.

// develop this program by using Switch case.

// #include <stdio.h>
// int main()
// {
//     char name[20];
//     int ID = 1001, Pass = 1010;
//     printf("Enter the Name:");
//     scanf("%s", name);
//     printf("Enter the ID");
//     scanf("%d", &ID);

//     switch (ID = 1001)
//     {
//     case 1:
//         scanf("%d", &Pass);
//         if (Pass = 1010)
//             printf("%s", name);
//     }
// }

// Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. The program will print the winner’s name and also print by how many

// points that person won by comparing the scores. Develop this program by using switch case.
// ================================================================================================================================================================================

// Develop below program using switch case)

// Write a C program that will read a float and a character from console. The character could be d for deposit or w for withdrawal.

// Starting with a Minimum balance of 2000.

// *Ask the user to initialize the minimum balance and don't allow 0 and -ve values if it is 0 or -ve then print "Ammount Can't be stored".

// *If the user want deposit operation then ask how much ammount he want to deposit and add that ammount

//  with balance and print the balance.

// *if the user want withdrwal operation then ask how much ammount he want to withdrwal and substract that

//  ammount from the balance and print the balance.

// [Note: If the deposit ammount is negetive or 0 print "Invalid ammount".

//     If the withdrawl ammount is negetive , 0 or greater than balance then print "Invalid ammount"]

// Hints:

// -------

// Declare variables for the amount in float, balance in float and transaction code in char types.

// Test the transaction code, if ‘d’ it is deposit. Test the ammount so that it is not negative.

// If the balance is not negative or positive sum-up

// the balance.

// balance = balance + amount;

// Test the transaction code for withdrawal, ‘w’. If the transaction code is ‘w’

// Minus the withdrawn amount to update the

// balance.

// balance = balance - amount;

// And print the balance.


#include <stdio.h>
int main()
{
    float min_balance, amount,tamount;
    char ch;
    
    printf("Enter the minium balance:\n");
    scanf("%f", &min_balance);
    if (min_balance >= 2000)
    {
       printf("Enter the deposite/Withdrawl d/w:\n");
    scanf(" %c", &ch);
        switch (ch)
        {
        case 'd':
        case 'D':
            printf("Enter the amount how much you want to deposit:\n");
            scanf("%f", &amount);
             tamount=min_balance+amount;
            printf("%f",tamount);
        default:
            if (amount < 0 || amount == 0)
                printf("Invalid amount");
        case 'w':
        case'W':
            printf("Enter the amount how much you want to withdrawl:\n");
            scanf("%f", &amount);
            if(min_balance>amount)
            {
            tamount =  min_balance - amount;
              printf("%f", tamount);
            }else
            {
                printf("Insufficient balance");
            }
          
            if (amount < 0 || amount > min_balance) 

                printf("Invalid amount");
        }
   
}else
{
    printf("Invalid amount please maintain the minimum balance");
}
 return 0;
}
