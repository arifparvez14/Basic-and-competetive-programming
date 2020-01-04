#include<stdio.h>
int work(int n)
{
    int i,j,k,l;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    for(k=(n-1); k>=1; k--)
    {
        for(l=1; l<=k; l++)
        {
            printf("%d",k);
        }
        printf("\n");
    }

}
int main()
{
    int x,y,n,t,m;
    scanf("%d",&t);

      for(x=1; x<=t; x++)
    {
        if(x!=1)
        {
            printf("\n");
        }

        scanf("%d",&n);
        scanf("%d",&m);
        if(n>9)
            break;

        for(y=1; y<=m; y++)
        {
            work(n);
            if(y!=m)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
