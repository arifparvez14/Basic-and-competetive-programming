#include<stdio.h>
int main()
{
    long long int a,i,sum;

    while(scanf("%lld",&a)==1)
    {
        sum=1;
        if(a<0)
            break;

        else if(a==0)
        {
            printf("%lld\n",a);
        }
        else
        {
            for(i=1; i<=a; i++)
            {
                sum=sum+i;
            }
            printf("%lld\n",sum);
        }

    }
    return 0;
}
