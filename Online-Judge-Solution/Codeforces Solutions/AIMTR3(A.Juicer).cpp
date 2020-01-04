#include<bits/stdc++.h>
#define ll long long int
#define max 100009
using namespace std;
int main()
{
    ll n,b,d,a[max],i,res;
    while(scanf("%lld %lld %lld",&n,&b,&d)==3)
    {
        ll sum=0,count=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]<=b )
                sum=sum+a[i];
            if(sum>d)
            {
                count++;
                sum=0;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
