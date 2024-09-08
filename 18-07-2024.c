// You are developing a program for an online bus ticket booking platform called "BusTicketBooker."
// The platform offers tickets for a fixed price of Rs. 300 per seat. However, there are discounts
// available for senior citizens. If a passenger's age is between 60 and 100 (inclusive), they will
//  receive a 20% discount on the total booking cost.
// Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator. The program should then display the bill with a suitable message, including the total cost and the discount amount (if applicable).

// #include <stdio.h>
// int main()
// {
//     int tickets,age, Total;
//     float Discount;
//     printf("Enter the age:");
//     scanf("%d\n",&age);
//     scanf("%d\n", &tickets);
//     printf("Enter the ticket:");
//     Total = tickets * 300;
//     Discount = age >= 60 && age <= 100 ? Total * 0.20 : 0;
//     Total-=Discount;
//      printf("%d\n", Total);
//     printf("%f\n", Discount);
// }

// Write a C program using the ternary operator to calculate the electricity bill for a given number of units consumed by a customer.

// For the first 100 units, the rate is Rs. 3.00 per unit.

// For any additional units beyond 100, the rate is Rs. 4.50 per unit.

// #include <stdio.h>
// int main()
// {
//     float units, bill, Totalbill;
//     printf("Enter the units");
//     scanf("%f", &units);
//     Totalbill = units <= 100 ? units * 3.00 : units * 4.50;
//     printf("%0.2f", Totalbill);
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    n>0? printf("positive"):n==0?printf("zero"):printf("negative");
}

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     (a<b&&a<c)?printf("%d is smallest",a):(b<a&&b<c)? printf("%d is smallest",b):printf("%d is smallest",c);
// }

// #include<stdio.h>
// int main()
// {
//     char employeeType;
//     float basic_Salary,Salary;
//     printf("Enter the M or H :");
//     scanf("%c",&employeeType);
//     printf("Enter the Basic Salary");
//     scanf("%f",&basic_Salary);
//    Salary= (employeeType=='M'||employeeType=='m')?basic_Salary+(basic_Salary*0.05):basic_Salary;
//    printf(" The calculated salary is:%.2f",Salary);
// }

#include<stdio.h>
int main()
{
    int purchase_amount,Discount,Discounted_amount;
    printf("Enter the purchase_amount:");
    scanf("%d",&purchase_amount);

  Discount=(purchase_amount<1000)?0: purchase_amount<=5000?purchase_amount*0.05:purchase_amount*0.10;
  Discounted_amount=purchase_amount-Discount;
  printf("Discounted amount:%d\n", Discounted_amount);
  printf("Discount:%d\n",Discount);
}