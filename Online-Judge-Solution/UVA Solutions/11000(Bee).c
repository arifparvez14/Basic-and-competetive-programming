#include<stdio.h>
int main()
{
    long long int i,n,f0,f1,sum;
    while(scanf("%lld",&n)==1 && n!=-1)
    {
        f0=1,f1=2,sum=0;
        for(i=1; i<=n; i++)
        {
            sum=f0+f1;
            f0=f1;
            f1=sum;
        }
        printf("%lld %lld\n",f0-1,f1-1);
    }
    return 0;
}
