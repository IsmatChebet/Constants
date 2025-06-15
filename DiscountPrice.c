#include <stdio.h>

int main() {

    float originalPrice;
    const float discountPercentage;
    float discountedPrice;

    printf("Enter the Original Price: ");
    scanf("%f", &originalPrice);

    printf("Enter the Discount Percentage: ");
    scanf("%f", &discountPercentage);

    discountedPrice = originalPrice * (1 - (discountPercentage / 100));

    printf("\n--- Discount Calculation ---");
    printf("\nOriginal Price: %.2f", originalPrice);
    printf("\nDiscount Percentage: %.2f%%", discountPercentage);
    printf("\nDiscounted Price: %.2f", discountedPrice);


    return 0;
}
