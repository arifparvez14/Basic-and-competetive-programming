#include<stdio.h>
int main()
{
    long long int n,a;
    while(scanf("%lld",&n)==1)
    {
        a=(((n*(n+2)/2)*3)-6);
        printf("%lld\n",a);
    }
    return 0;
}
