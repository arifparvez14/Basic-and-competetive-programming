#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,a[100010],num,i,det,d,x,count,k,y,flag,res;
    cin>>T;
    for(x=1; x<=T; x++)
    {
        count=0,flag=0,k=-100000000;
        cin>>num;
        a[0]=0;
        for(i=1; i<=num; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<num; i++)
        {
            d=a[i+1]-a[i];
            if(d>k)
                k=d;
        }
        res=k;
        for(i=0; i<num; i++)
        {
            d=a[i+1]-a[i];
            if(d>k)
            {
                res=res+1;
                break;
            }
            if(d==k)
                k--;
        }

        printf("Case %lld: %lld\n",x,res);
    }
    return 0;
}
