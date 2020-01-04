#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,f0,f1,sum,i;
    while(cin>>n && n!=0)
    {
        f0=0,f1=1,sum=0;
        for(i=1; i<=n; i++)
        {
            sum=f0+f1;
            f0=f1;
            f1=sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
