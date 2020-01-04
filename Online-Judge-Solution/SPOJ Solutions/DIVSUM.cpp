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
    ll ts, num, sum, i, j;
    cin>>ts;
    for(i = 0; i < ts; i ++){
        cin>>num;
        sum = 0;
        for( j = 2; j <= sqrt(num) ; j++)
        {
            if(num % j == 0)
            {
                sum = sum + j + (num / j);
            }
        }
            j--;
            if(j *j == num)
                sum -= j;
        cout<<sum+1<<endl;
    }
    return 0;
}



