#include <stdio.h>
#include <math.h>
int main()
{
    long long int i,a,b,inc,countt,x;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        countt=0;
        if(a==0 && b==0)
            break;
        for(i=a; i<=b; i++)
        {
            x=sqrt(i);
            if(x*x==i)
                countt=countt+1;
            else
                continue;
        }
        printf("%lld\n",countt);
    }
    return 0;
}

