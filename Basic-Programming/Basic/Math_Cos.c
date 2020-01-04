#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the angle:");
    scanf("%d",&t);

    printf("cos(%d)=%.2f",t,cos(t*M_PI/180));
    return 0;
}

