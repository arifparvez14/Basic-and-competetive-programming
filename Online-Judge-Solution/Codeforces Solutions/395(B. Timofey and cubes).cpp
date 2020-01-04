#include<bits/stdc++.h>
#define ll long long int
#define max 200009
using namespace std;
int main()
{
    ll n,a[max],b[max],i,c,l,k,x;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=n/2; i++)
        {
            if(i%2)
            {
                swap(a[i],a[n-i+1]);
            }
        }
        for(i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
