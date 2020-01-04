#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[1010],b[1010],c[1010],i,n,sum;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        c[0]=sum=b[0];
        for(i=1; i<n; i++)
        {
            sum=(sum-a[i])+b[i];
            c[i]=sum;
        }
        sort(c,c+n);
        cout<<c[n-1]<<endl;
    }
    return 0;
}
