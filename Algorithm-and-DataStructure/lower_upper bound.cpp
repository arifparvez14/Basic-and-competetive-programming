#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define ll long long int
#define FOR(i,n) for(int i=0;i<n;i++)
#define FOR(i,m) for(int i=0;i<m;i++)
#define vll vector<ll>
#define mp make_pair
#define msll map<string, ll>
#define pb push_back
using namespace std;
int main()
{
    vll v = {1,3,4,10,15};
    vll v1 = {10,20,30,30,40};
    vll v2 = {200,500,600,700};
    vll v3 = {10,100,100,100,200,300};
    vll :: iterator low1,low2,hi1,hi2,cal1,cal2;

    low1 = lower_bound(v.begin(),v.end(),2);
    cout<<low1-v.begin()<<" ";

    low2 = lower_bound(v1.begin(),v1.end(),30);
    cout<<low2-v1.begin()<<endl;

    hi1 = upper_bound(v2.begin(),v2.end(),650);
    cout<<hi1-v2.begin()<<" ";

    hi2 = upper_bound(v3.begin(),v3.end(),100);
    cout<<hi2-v3.begin()<<endl;

    cal1 = lower_bound(v3.begin(),v3.end(),15);
    cout<<cal1-v.begin()<<" ";

    cal2 = upper_bound(v3.begin(),v3.end(),100);
    cout<<cal2-v3.begin()<<endl;

    cout<<cal2-cal1;
    return 0;
}

