#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,a[100009],i,j,sum,x;
    while(cin>>n)
    {
        ll count=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                sum=a[i]+a[j];
                x=(ll)((log(sum))/(log(2)));
                if(sum==(ll)(pow(2,x)))
                    count++;
                cout<<sum<<" "<<x<<" "<<count<<" "<<endl;
            }
        }
        cout<<(ll)(count/2)<<endl;
    }
    return 0;
}
