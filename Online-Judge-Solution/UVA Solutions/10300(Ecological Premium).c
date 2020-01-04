#include<stdio.h>
int main()
{
    long long int i,n,m,j,x,y,z,sum,s1;

    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&m);
        sum=0;
        for(j=1; j<=m; j++)
        {
            scanf("%lld %lld %lld",&x,&y,&z);
            s1=x*z;
            sum=sum+s1;

        }
        printf("%lld\n",sum);
    }
    return 0;
}
