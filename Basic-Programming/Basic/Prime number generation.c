#include <stdio.h>
int main()
{
    int n,i,isprime;
    printf("Enter any number:");
    scanf("%d",&n);

    if(n<2)
    isprime=0;

    else
    isprime=1;

    for(i=2;i<n;i++)
    if(n%i==0)
    isprime=0;

    if(isprime==1)
    printf("prime");
    else
    printf("Not prime");

    return 0;
}
