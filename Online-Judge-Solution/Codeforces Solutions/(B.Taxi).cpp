#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum,res,rem,x,v[100000];
    while(cin>>n)
    {
        sum=0,x=0;
        for(i=1; i<=n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }
        if(sum>0 && sum<=4)
            cout<<1<<endl;
        else
        {
            res=sum/4;
            rem=sum%4;
            if(rem==0)
                x=res;
            else if(rem>0)
                x=res+1;
            cout<<x<<endl;
        }
    }
    return 0;
}
