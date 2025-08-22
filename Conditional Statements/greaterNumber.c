#include <stdio.h>

int main()
{
    int num1, num2, greaterNumber;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    greaterNumber = (num1 > num2) ? num1 : num2;
    
    printf("%d", greaterNumber);
    
    return 0;
    
}   
