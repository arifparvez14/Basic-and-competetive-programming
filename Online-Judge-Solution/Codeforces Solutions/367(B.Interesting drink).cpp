#include<bits/stdc++.h>
#define ll long long int
#define max 100009
using namespace std;
int main()
{
    ll n,x[max],q,m[max],count,i,j;
    vector<ll>v;
    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&x[i]);
            v.push_back(x[i]);

        }
        sort(v.begin(),v.end());

        scanf("%lld",&q);
        for(i=1; i<=q; i++)
        {
            scanf("%lld",&m[i]);

        vector<ll>::iterator ans=upper_bound(v.begin(),v.end(),m[i]);
        cout<<ans-v.begin()<<"\n";
        }

    }
    return 0;
}


