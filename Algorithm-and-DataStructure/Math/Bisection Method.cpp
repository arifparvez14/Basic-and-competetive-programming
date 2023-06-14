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
double square_root(double n){
    double lo = 1.0, hi =n;
    FOR(i,n)
    {
        double mid = (lo + hi) / 2.0;
        if(mid * mid > n){
            hi = mid;
        }
        else lo = mid;
    }
    return lo;
}
int main()
{
    printf("%.10f\n",square_root(11));
    return 0;
}
