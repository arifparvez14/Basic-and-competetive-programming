#include<bits/stdc++.h>
#define ll long long int
#define max 300009
using namespace std;
int main()
{
    ll n,i,a[max],k;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        if(n%2==1)
        {
            k=(n/2)+1;
            cout<<a[k]<<endl;
        }
        else
        {
            k=n/2;
              cout<<a[k]<<endl;
        }

    }
    return 0;
}

