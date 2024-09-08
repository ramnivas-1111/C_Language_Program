
// Write a C program that takes two integers as input from the user using scanf, calculates their sum, substraction,
//  multiplication, and division, and then prints these values.

// #include <stdio.h>
// int main()
// {
//     int a, b, sum, substraction, multiplication, division;
//     printf("Enter the 1st number:");
//     scanf("%d", &a);
//     printf("Enter the 2nd number:");
//     scanf("%d", &b);
//     sum = a + b;
//     printf("The sum is a+b: %d\n", sum);
//     substraction = a - b;
//     printf("The sum is a-b: %d\n", substraction);
//     multiplication = a * b;
//     printf("The sum is a*b: %d\n", multiplication);
//     division = a / b;
//     printf("The sum is a/b: %d", division);
// }

// 2)Write a program that takes the initial velocity (in meters per second),
// acceleration (in meters per second squared), and time (in seconds) from the user using scanf.
// Calculate the distance traveled by an object using the formula:

// #include <stdio.h>
// int main()
// {
//     int inital_velocity, acceleration, time;
//     float Distance;
//     printf("Enter the inital velocity:");
//     scanf("%d", &inital_velocity);
//     printf("Enter the accelration:");
//     scanf("%d", &acceleration);
//     printf("Enter the time:");
//     scanf("%d", &time);
//     Distance = inital_velocity * time + 0.5 * acceleration * time * time;
//     printf("Your distance is = %f", Distance);
// }

// 3)Write a program that converts an amount of money from one currency to another.
//  The user should input the amount in the source currency and the exchange rate.
//  Calculate the equivalent amount in the target currency and print it.

// #include <stdio.h>
// int main()
// {
//     int amount, exchange_rate;
//     float equivalent_amount;
//     printf("Enter the amount:");
//     scanf("%d", &amount);
//     printf("Enter the exchange_rate:");
//     scanf("%d", &exchange_rate);
//     equivalent_amount = amount * exchange_rate;
//     printf("your equivalent_amount rate is : %f",equivalent_amount);
// }

// 4)Write a program that takes details of an employee from the user, including name, employee ID,
//  designation, and salary. Then, print the details of the employee.

#include <stdio.h>
int main()
{
    char name[30];
    int employee_ID;
    char designation[50];
    int salary;
    printf("Enter the Name:");
      scanf("%s", name);
    printf("Enter the Employee_ID:");
    scanf("%d", &employee_ID);
    printf("Enter the designation:");
    scanf("%s", designation);
    printf("Enter the salary:");
    scanf("%d", &salary);
    printf("Your name is : %s\n", name);
    printf("Your Employee_ID: %d\n", employee_ID);
    printf("Your designiation is: %s\n", designation);
    printf("Your salary is:%d\n",salary);
}