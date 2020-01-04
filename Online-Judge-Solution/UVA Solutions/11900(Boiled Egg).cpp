#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int m,n,p,q,a[100],count,sum;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        count=0,sum=0;
        cin>>n>>p>>q;
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);

        if(n>=p)
        {
            for(int k=0; k<p; k++)
            {
                sum=sum+a[k];
                if(sum<=q)
                    count++;
            }
            printf("Case %ld: %ld\n",i,count);
        }
        else
        {
            {
                for(int k=0; k<n; k++)
                {
                    sum=sum+a[k];
                    if(sum<=q)
                        count++;
                }
                printf("Case %ld: %ld\n",i,count);
            }
        }
    }
    return 0;
}
