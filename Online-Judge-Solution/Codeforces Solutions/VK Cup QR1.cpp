#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,count;
    int v[200];
    while(scanf("%d %d",&n,&k)==2)
    {
        count=0;
        for(i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        if(v[k]==0)
        {
            for(i=1; i<=n; i++)
            {
                if(v[i]>v[k])
                    count++;
            }
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(v[i]>=v[k])
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
