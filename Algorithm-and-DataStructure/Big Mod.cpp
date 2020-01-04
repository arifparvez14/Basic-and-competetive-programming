#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)

using namespace std;
long long bigmod(long long a,long long power,long long mod){
    if(power==0)return 1ll;
    if(power==1)return a%mod;
    else if(power%2==0){
        long long x=bigmod(a,power/2,mod);
        return (x*x)%mod;
    }
    else{
        long long x=bigmod(a,power-1,mod);
        return (a*x)%mod;
    }
}
int main()
{
    bigmod(23,2,98);
    return 0;
}
