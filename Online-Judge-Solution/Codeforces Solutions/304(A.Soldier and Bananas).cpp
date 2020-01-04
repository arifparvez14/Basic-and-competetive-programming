#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,w,i,sum;
    while(cin>>k>>n>>w)
    {
        sum=0;
        for(i=1;i<=w;i++)
        {
            sum=sum+k*i;
        }
        if(sum>=n)
            printf("%lld\n",sum-n);
        else
            printf("0\n");
    }
    return 0;
}
