#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    while(((scanf("%lld",&n))==1) && n!=0)
    {
        k=0;
        k=sqrt(n);
        if(n==k*k)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
