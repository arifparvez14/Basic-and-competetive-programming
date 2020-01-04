#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char s;
    ll v;
    ll n,x,i,count,sum;
    while(scanf("%lld %lld",&n,&x)==2)
    {
        count=0;
        sum=x;
        for(i=0;i<n;i++)
        {
            cin>>s>>v;
            if(s=='+')
                {
                    sum=sum+v;
                }
            if(s=='-')
            {
                if(sum>=v)
                    sum=sum-v;
                else
                    count++;

            }
        }
        cout<<sum<<" "<<count<<endl;
    }
    return 0;

}

