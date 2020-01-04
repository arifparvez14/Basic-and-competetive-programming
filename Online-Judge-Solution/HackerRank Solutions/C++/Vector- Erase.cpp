//2. Vector- Erase


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;


int main() {
    ll n,x,i,se,me1,me2;
    vector<ll>v;
    cin>>n;
    for (i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>se>>me1>>me2;
    v.erase(v.begin()+(se-1));
    v.erase(v.begin()+(me1-1),v.begin()+(me2-1));
    cout<<v.size()<<endl;
    for (i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
