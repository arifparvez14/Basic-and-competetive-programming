#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,sum,l;
    int a[10000],b[10000],c[10000];
    while(cin>>n>>k)
    {
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            c[i]=a[i];
        }
        b[0]=a[0];
        for(i=0; i<(n-1); i++)
        {
            if(a[i]+a[i+1]<k)
            {
                b[i+1]=k-abs(a[i]+a[i+1])+a[i+1];
                a[i+1]=b[i+1];
            }

        }
        for(i=0;i<n;i++)
        {
            sum=sum+abs(c[i]-a[i]);
        }
        cout<<sum<<endl;
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
