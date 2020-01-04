#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,sum;
    while(cin>>n>>m)
    {
        sum=0;
        if(n<=0 || m<=0)
        break;

        if(n<=m)
        {
            for(i=n;i<=m;i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            for(i=m;i<=n;i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
