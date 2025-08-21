#include <stdio.h>

int main()
{
    float sqM, discount, price, finalPrice;
    
    float pricePerSqM = 7.61;
    float discountPercent = 0.18;
    
    scanf("%f", &sqM);
    
    price = sqM * pricePerSqM;
    discount = price * discountPercent;
    finalPrice = price - discount;
    
    printf("The final price is: %.2f lv.\n", finalPrice);
    printf("The discount is: %.2f lv.", discount);
    
    return 0;
}
