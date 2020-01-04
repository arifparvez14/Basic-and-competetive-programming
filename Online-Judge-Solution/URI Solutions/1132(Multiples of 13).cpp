#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m,sum;
    while(cin>>n>>m)
    {
        sum=0;
        if(n<=m)
        {
            for(i=n;i<=m;i++)
            {
                if((i%13)!=0)
                    sum=sum+i;
            }
        }
        else
        {
           for(i=m;i<=n;i++)
            {
                if((i%13)!=0)
                    sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
