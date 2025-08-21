#include <stdio.h>

int main()
{
    char name[100];
    int projectsCount;
    
    int timePerProject = 3;
    
    scanf("%s", name);
    scanf("%d", &projectsCount);
    
    printf("The architect %s will need %d hours to complete %d project/s.", name, timePerProject * projectsCount, projectsCount);
    
}
