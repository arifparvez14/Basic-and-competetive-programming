#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum;
    while(cin>>n && n!=0)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+i*i;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
