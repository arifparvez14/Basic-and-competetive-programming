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

const int maxn = 10000007;
bool marked[maxn];
vector <int> primes;

void seive(int n)
{
    for(int i = 0; i< n; i++)
        marked[i] = true;

    for (int i = 4; i < n; i += 2)
        marked[i] = false;

    int sqr = sqrt(n);
    for (int i = 3; i <= sqr; i += 2){
        if (marked[i] == true){
            for (int j = i * i; j < n; j += 2 * i){
                marked[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++){
        if (marked[i] == true){
            primes.push_back(i);
        }
    }
}
int main (){
    seive(30);
    int num = 51;

    /*for (int i = 0; i < primes.size(); i++){
        int cnt = 0;
        while(num % primes[i] == 0){
            num /= primes[i];
            cnt++;
        }
        if (cnt) cout<<primes[i]<<"^"<<cnt<<endl;
    }*/
    for (int i = 0; i < sqrt(num); i++){
        int cnt = 0;
        while(num % primes[i] == 0){
            num /=  primes[i];
            cnt++;
        }
        if(cnt) cout<<primes[i]<<"^"<<cnt<<endl;
    }
    if(num != 1) cout<<num<<"^"<<1<<endl;
    return 0;
}

