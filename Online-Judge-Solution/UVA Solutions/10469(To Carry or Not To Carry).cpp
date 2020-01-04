#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0;
    while(scanf("%lld %lld",&a,&b)==2)
    {
     c=a^b;
     printf("%lld\n",c);
    }
    return 0;
}
