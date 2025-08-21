#include <stdio.h>

int main()
{
  int length, width, height;
  double percent;
  double totalVolume, freeVolume;
  
  scanf("%d", &length);
  scanf("%d", &width);
  scanf("%d", &height);
  scanf("%lf", &percent);
  
  totalVolume = ((float) length * width * height) / 1000;
  freeVolume = totalVolume - (totalVolume * (percent / 100.0));
  
  printf("%.3lf", freeVolume);
}
