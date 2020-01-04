#include <stdio.h>
int main()
{
    long long int a,b,c,d,l,i,val,sum;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)==5)
    {
        val=0,sum=0;

        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;

        for(i=0; i<=l; i++)
        {
            val=a*(i*i)+b*i+c;
            if(val%d==0)
                sum=sum+1;
            else
                continue;
        }
        printf("%lld\n",sum);
    }
    return 0;
}



