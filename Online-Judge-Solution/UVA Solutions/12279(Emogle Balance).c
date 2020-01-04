#include <stdio.h>
int main()
{
    int a[1000],n,i,high,low,emoogle,c=0,j;
    while(scanf("%d",&n)==1)
    {
        high=0,low=0,emoogle=0;
        if(n==0)
            break;

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(j=1; j<=n; j++)
        {

            if(a[j]>0)
                high=high+1;

            else
                low=low+1;
        }
        emoogle=high-low;
        printf("Case %d: %d\n",c+1,emoogle);
        c++;
    }

return 0;
}
