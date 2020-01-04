#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[1000],i,sum,n,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        sum=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        sum=2*(a[n-1]-a[0]);
        cout<<sum<<endl;

    }
    return 0;
}
