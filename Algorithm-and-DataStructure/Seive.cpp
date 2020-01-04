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
typedef long long ll;

const int maxn = 10000007;

bool marked[maxn];

vector <int> primes;

int main (){
    int n = 10000000;
    for (int i = 0; i < n; i++)
        marked[i] = true;


    for (int i = 4; i <= n; i += 2)
        marked[i] = false;

    int sqn = sqrt (n);
    for (int i = 3; i <= sqn; i += 2){
        if (marked[i] == true){
            for (int j = i * i; j <= n; j += 2 * i){
                marked[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
        if (marked[i] == true)
            primes.push_back (i);

    for(int i = 0; i < primes.size(); i++)
        cout<<primes[i]<<" ";

    cerr << primes.size() << endl;


    return 0;
}
