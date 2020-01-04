#include <stdio.h>
#include <math.h>
int main()
{
    long n;
    printf("Enter the value:");
    scanf("%ld",&n);

    printf("The square root of %ld is %ld",n,(long)sqrt(n));
    return 0;
}
