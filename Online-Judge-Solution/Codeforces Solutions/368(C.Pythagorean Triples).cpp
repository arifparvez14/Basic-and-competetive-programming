#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,l,m;
    while(cin>>n)
    {
        if(n%2==1)
        {
            k=(n*n)/2;
            l=k,m=k+1;
            if((n!=0 && l!=0 && m!=0) && ((n*n==l*l+m*m) || (l*l==n*n+m*m) || (m*m==l*l+n*n)))
                printf("%lld %lld\n",k,k+1);
            else
                printf("-1\n");
        }
        else
        {
            k=(n/2)*(n/2);
            l=k-1,m=k+1;
            if((n!=0 && l!=0 && m!=0) && ((n*n==l*l+m*m) || (l*l==n*n+m*m) || (m*m==l*l+n*n)))
                printf("%lld %lld\n",k-1,k+1);
            else
                printf("-1\n");
        }
    }
    return 0;
}
