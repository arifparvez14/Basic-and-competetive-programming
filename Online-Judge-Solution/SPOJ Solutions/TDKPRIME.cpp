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

const int maxn = 87000008;
bool marked[maxn];
vector <ll> primes;

void seive()
{
    for(ll i = 0; i< maxn; i++)
        marked[i] = true;

    for (ll i = 4; i < maxn; i += 2)
        marked[i] = false;

    int sqr = sqrt(maxn);
    for (ll i = 3; i <= sqr; i += 2){
        if (marked[i] == true){
            for (ll j = i * i; j < maxn; j += 2 * i){
                marked[j] = false;
            }
        }
    }
    for (ll i = 2; i < maxn; i++){
        if (marked[i] == true){
            primes.push_back(i);
        }
    }
}
int main (){
    seive();
    fileread;
    ll ts,num;
    cin>>ts;
    for(int i=0; i<ts;i++){
        cin>>num;
        cout<<primes[num-1]<<endl;
    }
    return 0;
}
