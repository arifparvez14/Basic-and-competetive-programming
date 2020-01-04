#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter any angle:");
    scanf("%f",&n);

    printf("Sin Inverse(%.2f)=%.2f",n,asin(n)*180/M_PI);
    return 0;
}
