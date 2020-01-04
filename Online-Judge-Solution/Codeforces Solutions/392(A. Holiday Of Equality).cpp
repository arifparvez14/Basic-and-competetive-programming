#include<bits/stdc++.h>
#define ll long long int
#define m 1000000
using namespace std;
int main()
{
    ll n,a[m],i,k,sum;
    while(cin>>n)
    {
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        k=a[n-1];
        for(i=0; i<n; i++)
        {
            sum=sum+abs(k-a[i]);
        }
        cout<<sum<<endl;
    }
    return 0;

}
