#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main()
{
    float radius, area, perimeter;
    scanf("%f", &radius); 
    
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;
    
    printf("%.2f\n", area);
    printf("%.2f\n", perimeter);
  
    return 0;
}
