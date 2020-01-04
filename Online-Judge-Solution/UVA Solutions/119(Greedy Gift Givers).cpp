#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string s[10],giver,receiver;
map<string, ll> mp;
int main()
{
    ll n,m,i,j,k=1,p;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            mp[s[i]]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>giver>>m>>p;
            ll amount;
            if(p==0)
                continue;
            amount=m/p;
            for(j=0;j<p;j++)
            {
                cin>>receiver;
                mp[receiver]+=amount;
                mp[giver]-=amount;
            }
        }
        if(k!=1)
            cout<<endl;
        k++;
        for(i=0;i<n;i++)
        {
            cout<<s[i]<<" "<<mp[s[i]]<<endl;
        }
        mp.clear();
        for(i=0;i<10;i++)
            s[i].clear();

    }
    return 0;
}

