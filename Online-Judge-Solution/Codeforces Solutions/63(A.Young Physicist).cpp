#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[500],b[500],c[500],n,i,sum1,sum2,sum3;
    while(cin>>n)
    {
        sum1=sum2=sum3=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
            sum1=sum1+a[i];
            sum2=sum2+b[i];
            sum3=sum3+c[i];
        }
        if(sum1==0 && sum2==0 && sum3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
