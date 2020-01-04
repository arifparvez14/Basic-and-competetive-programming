#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000],i,n,c,d,e,sum;
    while(cin>>n)
    {
        c=d=e=sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i]>>b[i];
                c=c+a[i];
                d=d+b[i];
        }
        if(c<=n/2)
            sum=sum+c;
        else if(c>n/2)
            sum=sum+(n-c);

        if(d<=n/2)
            sum=sum+d;
        else if(d>n/2)
            sum=sum+(n-d);

          cout<<sum<<endl;
    }
    return 0;
}
