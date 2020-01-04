#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            printf("%lld %lld %lld\n",i,i*i,i*i*i);
            printf("%lld %lld %lld\n",i,(i*i)+1,(i*i*i)+1);
        }
    }
    return 0;
}
