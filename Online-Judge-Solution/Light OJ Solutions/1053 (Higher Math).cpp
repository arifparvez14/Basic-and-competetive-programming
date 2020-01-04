#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,t,k=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
            printf("Case %lld: yes\n",++k);
        else
            printf("Case %lld: no\n",++k);
    }
    return 0;
}
