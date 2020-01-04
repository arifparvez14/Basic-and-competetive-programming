#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the angle:");
    scanf("%d",&t);

    printf("tan(%d)=%.2f",t,tan(t*M_PI/180));
    return 0;
}


