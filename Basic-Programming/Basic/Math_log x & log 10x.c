#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter the value:");
    scanf("%f",&n);

    printf("log of %.2f is %.2f",n,log(n));
    printf("\nlog 10 of %.2f is %.2f",n,log10(n));

    return 0;
}
