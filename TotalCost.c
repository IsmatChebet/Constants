#include <stdio.h>
#include <stdlib.h>

int main() {

    const double SALES_TAX_RATE = 0.18;

    printf("\nProblem 5: Total Cost with Sales Tax Calculation ---\n");

    double productPrice_p5 = 120000.0;
    double salesTaxAmount;
    double totalCost;

    salesTaxAmount = SALES_TAX_RATE * productPrice_p5;
    totalCost = productPrice_p5 + salesTaxAmount;

    printf("Product Price : %.2f UGX\n", productPrice_p5);

    printf("Sales Tax Rate : %.2f%%\n", SALES_TAX_RATE * 100);
    printf("Sales Tax Amount : %.2f UGX\n", salesTaxAmount);
    printf("Total Cost (including tax) is : %.2f UGX\n", totalCost);
    printf("---------------------------------------------\n");

    return 0;
}
