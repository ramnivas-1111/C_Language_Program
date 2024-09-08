/*
icket Pricing For Theme Park
You are developing a ticket pricing system for a theme park. Write a program that takes the following inputs from a customer:



Age (integer)

Height in centimeters (float)

Whether the customer has a VIP pass (y or n)

The program should calculate the ticket price based on the following rules:



Children under 3 years old (inclusive) get in for free.

Children aged 4 to 12 (inclusive) pay Rs.20.

Adults aged 13 to 64 (inclusive) pay Rs.100.

Seniors aged 65 and above pay Rs.50.

However, there are some additional considerations based on height:



If the customer is above 180 cm in height, they pay an extra 50.

If the customer is between 120 cm (inclusive) and 180 cm (inclusive), no additional charge applies.

If the customer is below 120 cm, they receive a 50% discount on the base ticket price.

If the customer has a VIP pass, they get a 10% discount on the final ticket price.



Write a program that implements these pricing rules and provides the following output:



The customer's age, height, and VIP pass status.

The calculated base ticket price before any discounts or additional charges.

Any discounts or additional charges applied based on height.

The final ticket price after applying all discounts and charges.

Additionally, if the customer's age is below 0 or height is negative, the program should provide an */

#include <stdio.h>
int main()
{
    int age, children,pay;
    float height,Total;
    char VIP,y,n;
    printf("Enter the Age:");
    scanf("%d", &age);
    printf("Enter the Height:");
    scanf("%f", &height);
    printf("Enter the customer has a VIP:");
    scanf(" %c", & VIP);

    if (age <= 3)
    {
        pay=0;
    }
    else if (age >= 4 && age <= 12)
    {
        pay=20;
    }
    else if (age >= 13 && age <= 64)
    {
        pay=100;
    }
    else
    {
        pay=50;
    }
if(height>=180)
    {
        Total=pay+50;
    }
    else if(height>=120 && height<=180)
    {
       pay=pay+0 ;
    }

   else if(height<=120)
   {
    pay=pay-(pay*50/100);
   }

   if(VIP==y && VIP==n)
   {
    pay=pay-(pay*10/100);
   }

   printf("%d",pay);
   printf("%d",Total);
}
