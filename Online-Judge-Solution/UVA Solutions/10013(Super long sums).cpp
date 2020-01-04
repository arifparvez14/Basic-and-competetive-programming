#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,t,a[100000],b[100000],j,sum1,sum2,k,l,sum,m;
    cin>>t;
    for(z=1;z<=t;z++)
    {
        sum=0;
        sum1=0;
        sum2=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(j=1;j<=n;j++)
        {
            k=(n)-j;

             cout<<(a[j]*pow(10,k))<<endl;
            sum1+=(a[j]*pow(10,k));
            sum2=sum2+(b[j]*pow(10,k));
            cout<<sum1<<" "<<sum2<<endl;
        }
        sum=sum1+sum2;
        cout<<sum<<endl;

    }
    return 0;
}
