#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter any angle:");
    scanf("%f",&n);

    printf("sec Inverse(%.2f)=%.2f",n,acos(1.0/n)*180/M_PI);
    return 0;
}




