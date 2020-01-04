#include<stdio.h>
int main()
{
    int i,j,n,a[100],sum1,sum2,avg,see,countt=0;
    while(scanf("%d",&n)==1 && n!=0)
    {
        sum1=0,sum2=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum1=sum1+a[i];
        }
        avg=sum1/n;
        for(j=1;j<=n;j++)
        {
            if(a[j]>avg)
            {
                see=a[j]-avg;
                sum2=sum2+see;
            }

        }
    printf("Set #%d\n",countt+1);
    printf("The minimum number of moves is %d.\n\n",sum2);
    countt++;
    }
    return 0;
}
