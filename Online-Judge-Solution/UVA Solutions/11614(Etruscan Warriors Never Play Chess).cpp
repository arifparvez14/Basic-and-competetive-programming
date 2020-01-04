#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,n,s;
    cin>>T;
    while(T--)
    {
        cin>>s;
        n=(sqrt(1+8*s)-1)/2;
        printf("%lld\n",n);
    }
    return 0;
}
