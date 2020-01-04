#include <stdio.h>

int main()
{
    long long  int n,a;
    while(scanf("%lld", &n)==1)
    {
        if( n>=0 && n<=210000000)
        {
            a= ((n*(n+1))/2)+1;
            printf("%lld\n", a);
        }
        else if(n<0)
        break;
    }
    return 0;
}
