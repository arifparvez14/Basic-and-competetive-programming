#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the angle:");
    scanf("%d",&t);

    printf("cot(%d)=%.2f",t,1/tan(t*M_PI/180));
    return 0;
}



