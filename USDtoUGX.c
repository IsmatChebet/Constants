#include <stdio.h>

int main() {

    const double UGX_TO_USD_RATE = 3780.0;

    double usdAmount = 700.0;
    double totalUGX;

    totalUGX = usdAmount * UGX_TO_USD_RATE;

    printf("\nProblem 3: USD to UGX Exchange Calculation :\n");
    printf("Amount to exchange: %.2f USD\n", usdAmount);
    printf("Exchange Rate: %.2f UGX/USD\n", UGX_TO_USD_RATE);
    printf("Total UGX for %.2f USD is: %.2f UGX\n", usdAmount, totalUGX);


    return 0;
}
