#include <stdio.h>

int main()
{
    int zoo, mine;
    float cost;
    
    float zooPrice = 2.50;
    int minePrice = 4;
    
    scanf("%d", &zoo); 
    scanf("%d", &mine); 
    
    cost = zoo * zooPrice + mine * minePrice;
    
    printf("%.2f lv.", cost);
    
    return 0;
}
