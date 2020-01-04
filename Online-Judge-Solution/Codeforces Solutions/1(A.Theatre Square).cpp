#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double n,m,a;
    long long x;
    while(cin>>n>>m>>a)
    {
        x=ceil(n/a)*ceil(m/a);
        cout<<x;
        return 0;
    }
}
