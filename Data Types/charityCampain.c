#include <stdio.h>

int main()
{
    int cakePrice = 45;
    double wafflesPrice = 5.80;
    double pancakesPrice = 3.20;
    
    int days, workers, cakes, waffles, pancakes;
    double price, finalPrice;
    
    scanf("%d", &days);
    scanf("%d", &workers);
    scanf("%d", &cakes);
    scanf("%d", &waffles);
    scanf("%d", &pancakes);
    
    price = ((cakes * cakePrice + wafflesPrice * waffles +
        pancakes * pancakesPrice) * workers) * days;
    finalPrice = price - price / 8;
    
    printf("%.2lf", finalPrice);
}
