#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,l,sum,m;
    int a[1000],b[1000];
    while(cin>>n>>k)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=(n-1);i++)
        {
            if((a[i]+a[i+1])<k)
            {
                l=k-(a[i]+a[i+1]);
                m=a[i+1]+l;
                a[i+1]=m;
                sum=sum+l;
            }
        }
        cout<<sum<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
