#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k,x,b;
    while(cin>>n>>k)
    {
        int count=0,sum=0;
        int x=2*k;
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>b;
            mp[b]++;
        }
        if(n==1){ cout<<ceil((double)b/x)<<endl;
            continue;
        }
        map<ll,ll> :: iterator it = mp.begin();
        vector<ll> v;
        ll ans = 0;
        ll p=0;
        while(it != mp.end()){
            ll tem = it->first * it->second;
            if(tem>=x){
                ans = ans + tem/x;
                tem%=x;

            }
            if(tem>=k){
                ans++;
                p++;
                tem=0;
            }
            if(tem!=0){
                v.push_back(tem);
            it++;
        }

    }
    ans+=ceil(v.size()-p/2.0);
        cout<<ans<<endl;
    return 0;
}
}
