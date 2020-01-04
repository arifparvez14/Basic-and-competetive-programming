#include<bits/stdc++.h>
#define ll long long int
#define max 100009
using namespace std;
int main()
{
    ll a[max],i,n,k;
    while(cin>>n)
    {
        ll count=0,k=1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<(n-1); i++)
        {
            if(a[i]<a[i+1])
                k++;
            else
            {
                if(k>=count)
                    count=k;
                k=1;
            }
        }
        if(count==0 || k>=count)
            printf("%lld\n",k);
        else
            printf("%lld\n",count);
    }
    return 0;
}
