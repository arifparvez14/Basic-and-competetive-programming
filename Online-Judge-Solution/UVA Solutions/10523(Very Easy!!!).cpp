#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a,sum;
    while(cin>>n>>a)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+(i*pow(a,i));
        }
        cout<<sum<<endl;
    }
    return 0;
}
