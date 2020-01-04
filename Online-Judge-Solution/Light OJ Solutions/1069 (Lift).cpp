#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,k=0,me,lift,ans;
    cin>>test;
    while(test--)
    {
        cin>>me>>lift;
        ans=abs((lift-me)*4)+11+me*4+8;
        printf("Case %lld: %lld\n",++k,ans);
    }
    return 0;
}
