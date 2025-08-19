
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, hypotenuse;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
    
    printf("Hypotenuse is %d.", hypotenuse);
    
    return 0;
}
