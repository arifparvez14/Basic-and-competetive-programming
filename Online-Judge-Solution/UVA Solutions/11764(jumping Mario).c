#include <stdio.h>
int main()
{
    int a[100],i,b,j,k,low,high,d,c=0;
    scanf("%d",&d);
    for(i=1; i<=d; i++)
    {
        low=0,high=0;
        scanf("%d",&b);
        for(j=0; j<b; j++)
        {
            scanf("%d",&a[j]);
        }
        for(k=0; k<b-1; k++)
        {
            if(a[k]>a[k+1])
                low=low+1;

            else if(a[k]<a[k+1])
                high=high+1;

            else
                continue;
        }
        printf("Case %d: %d %d\n",c+1,high,low);
        c++;
    }
}

