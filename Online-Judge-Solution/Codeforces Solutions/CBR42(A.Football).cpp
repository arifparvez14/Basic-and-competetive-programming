#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k=0,i;
    string s1,s2;
    map<string, int> mp;
    map<string, int>:: iterator itr;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s1;
        mp[s1]++;
    }
    for(itr = mp.begin(); itr != mp.end(); itr++)
    {
        if(itr->second>k){
            k=itr->second;
            s2=itr->first;
        }
    }
    cout<<s2;
    return 0;
}
