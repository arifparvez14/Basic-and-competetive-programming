#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100000],n,m,i,l;
    while(cin>>n>>m)
    {
        l=0;
        for(i=1;i<=m;i++)
        {
           cin>>a[i];
        }
        l=a[1]-1;
        for(i=1;i<m;i++)
        {
            if(a[i+1]>=a[i])
                l=l+a[i+1]-a[i];
            else if(a[i+1]<a[i])
            {
                l=l+(n-a[i])+a[i+1];
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
