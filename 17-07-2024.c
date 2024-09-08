// 1)Cycle Selling Price CalculatorRohan purchased an old cycle for Rs. 1200 and spent Rs. 250 on repairs,
// Rs. 350 on coloring, and added new accessories worth Rs. 500. Rohan wants to make a profit of Rs. 1500 on
// selling the cycle.
// Write a C program that calculates and displays the selling price of the cycle based on the given information.

// #include <stdio.h>
// int main()
// {
//     int costPrice;
//     printf("costPrice: The initial cost of the cycle:");
//     scanf("%d", &costPrice);
//     int repairCost;
//     printf("repairCost: The cost of repairs:");
//     scanf("%d", &repairCost);
//     int coloringCost;
//     printf("coloringCost: The cost of coloring:");
//     scanf("%d", &coloringCost);
//     int accessoriesCost;
//     printf("accessoriesCost: The cost of new accessories:");
//     scanf("%d", &accessoriesCost);
//     int profit;
//     printf("desiredProfit: The desired profit");
//     scanf("%d", &profit);
//     int totalCost;
//     printf("Total cost is :");
//     totalCost = costPrice + repairCost + coloringCost + accessoriesCost;
//     printf("%d\n", totalCost);
//     int sellingPrice;
//     printf("Selling price is :%d", sellingPrice = costPrice + repairCost + coloringCost + accessoriesCost + profit);
// }

// Write a C program to find the surface area of a cylinder.
// Take the height and radius as a input from the user by using scanf().

// #include <stdio.h>
// int main()
// {
//     float radius, area;
//     float height;
//     printf("Enter the radius");
//     scanf("%f", &radius);
//     printf("Enter the height");
//     scanf("%f", &height);
//     area = (2 * 3.14 * radius * radius) + (2 * 3.14 * radius * height);
//     printf("surface Area is : %f", area);
// }

#include <stdio.h>
int main()
{
    int costPrice, sellingPrice, profit, loss, profitPer, lossper;
    printf("Enter the cost Price :");
    scanf("%d", &costPrice);
    printf("enter the sellingPrice");
    scanf("%d", &sellingPrice);
    profit = sellingPrice - costPrice;
    loss = costPrice - sellingPrice;
    printf("profit is %d\n selling price%d\n", profit, loss);
}