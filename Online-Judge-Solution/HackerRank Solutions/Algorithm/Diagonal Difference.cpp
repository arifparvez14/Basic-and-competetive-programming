#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a[1000][1000],i,j,n,d1=0,d2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
           cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(i == j)
            {
                d1 += a[i][j];
            }
            if(i+j == n-1 )
                d2 += a[i][j];
        }
    }
    cout<<abs(d1-d2);
    return 0;
}
