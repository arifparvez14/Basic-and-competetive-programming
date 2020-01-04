#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter the value:");
    scanf("%f",&n);

    printf("e to the power %.2f is %.2f",n,(float)exp(n));
    return 0;
}
