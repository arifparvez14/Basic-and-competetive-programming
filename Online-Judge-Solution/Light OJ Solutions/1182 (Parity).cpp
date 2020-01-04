#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,num,k=1,x;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>num;
        while(num!=0)
        {
            if(num%2==1)
            x++;

            num=num/2;
        }
        if(x%2!=0)
            printf("Case %lld: odd\n",k++);
        else
            printf("Case %lld: even\n",k++);
    }
    return 0;
}
