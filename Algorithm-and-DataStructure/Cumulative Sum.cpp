#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define FOR(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define vll vector<ll>v
#define wll vector<ll>w
#define pb(x) push_back(x)
using namespace std;
int main()
{
    ll n,x,sum=0;
    vll;wll;
    fileread;
    cin>>n;
    FOR(i,n){
        cin>>x;
        v.pb(x);
    }
    FOR(i,n){
        sum = sum + v[i];
        x = sum;
        w.pb(x);
    }
    FOR(i,n){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    FOR(i,n){
        cout<<w[i]<<" ";
    }

    return 0;
}


