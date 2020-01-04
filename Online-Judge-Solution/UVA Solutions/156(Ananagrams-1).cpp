#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define ll long long int
#define FOR(i,n) for(int i=0;i<n;i++)
#define vll vector<ll>
#define msll map<string, ll>
#define pb push_back
using namespace std;
vector<string>v;
string s[10000],t[10000],x,upper;
int main()
{
    fileread;
    ll i=0;
    while(cin>>x)
    {
        if(x== "#")
            break;
        t[i]=x;
        transform(x.begin(), x.end(),x.begin(), ::toupper);
        sort(x.begin(),x.end());
        s[i]=x;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(s[j]==s[k])
            {
                t[j].clear();
                t[k].clear();
            }
        }
    }
    for(int k=0;k<i;k++)
    {
        v.push_back(t[k]);
    }
    sort(v.begin(),v.end());
    int total = result.size();
     for (int i = 0; i < total; ++i)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}

