#include<stdio.h>
int main()
{
    int n,result,sum,rem,sum1,k;
    while(scanf("%d",&n)==1)
    {
        sum=0;

        k=n+1;

        while(k>=3)
        {
            result=k/3;
            rem=k%3;
            sum=sum+result;

            k=result+rem;
        }

        sum1=sum+n;

        printf("%d\n",sum1);

    }
    return 0;
}

