/*
Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program.
Sample Input
Enter month number (1-12): 4
Sample Output
Number of days: 30
*/

// #include<stdio.h>
// int main()
// {
//     int month;
//     printf("Enter the months:");
//     scanf("%d",&month);
//     if(month==1||month==3||month==5||month==7||month==8||month==9||month==12)
//     {
//     printf("31 days");
//     }
//     else if(month==2)
//     {
//         printf("28/29 days");
//     }
//     else if(month==2||month==4||month==6||month==10||month==11)
//     {
//     printf("30days");
//     }
//     else{
//         printf("Invalid month");
//     }
// }

// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:

// -> For first 50 units Rs. 0.50/unit 

// -> For next 100 units Rs. 0.75/unit

// -> For next 100 units Rs. 1.20/unit

// -> For unit above 250 Rs. 1.50/unit

// An additional surcharge of 20% is added to the bill.

// How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.

// #include <stdio.h>
// int main()
// {
//     float units, bill, charge, Total_bill;
//     printf("Enter the unit charge");
//     scanf("%f", &units);
//     if (units >= 0 && units <= 50)
//     {
//         bill = units * 0.50;
//     }
 
//     else if (units <= 150)
//     {
//         bill = (50 * 0.50) + (units - 50) * 0.75;
//     }
//     else if (units <= 250)
//     {
//         bill = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
//     }
//     else
//     {
//         bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20)+(units - 250) * 1.50;
//     }
//     Total_bill = bill + bill*0.2;
//     printf("%0.2f", Total_bill);
// }

#include <stdio.h>
int main()
{
    float Salary, Total_salary,Tax;

    int Home_Allowance = 10000;
    int Food_Allowance = 3000;
    int Travel_Allowance = 10000;
char ch;
printf("Enter the Designation:");
scanf("%c",&ch);
printf("Enter the Base Salary:");
scanf("%f",&Salary);

if(ch=='D' ||ch=='d')
{
 Total_salary= Salary + Home_Allowance;
}
else if(ch=='T'||ch=='t')
{
 Total_salary= Salary + Home_Allowance + Food_Allowance ;
}
else if(ch=='M'||ch=='m')
{
 Total_salary= Salary + Home_Allowance + Food_Allowance + Travel_Allowance;
}
else
{
    printf("Invalid Input");
}
 if(Total_salary>40000)
 {
    Tax=Total_salary*10/100;
 }
 else{
    Tax=Total_salary*5/100;
 }
 printf("Designation:%c\n",ch);
 printf("Base Salary :%0.2f\n",Salary);
 printf("Total Slary :%0.2f\n",Total_salary);
 printf(" Tax:%0.2f\n",Tax);
}

