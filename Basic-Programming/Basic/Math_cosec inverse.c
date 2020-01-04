#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter any angle:");
    scanf("%f",&n);

    printf("cosec Inverse(%.2f)=%.2f",n,asin(1.0/n)*180/M_PI);
    return 0;
}





