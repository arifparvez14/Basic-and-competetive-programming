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
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;
int main (){
    int num = 1200, five = 5, ans = 0;
    for (int i = 1; ; i++){
        if (num / five == 0) break;
        ans += num / five;
        five *= 5;
    }
    cout<<ans;
    return 0;
}
