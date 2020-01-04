#include<bits/stdc++.h>
using namespace std;
long long int send(long long int a)
{
    int count=0,i,x;
    x=sqrt(a);
    if(a<=2)
        return a;
    for(i=1; i<=x; i++)
        if(a%i==0)
        {
            count++;
            if(a/i!=i)
                count++;
        }
    return count;
}
int main()
{
    long long int a,b,i,x,max,pos,n,k;
    cin>>n;
    for(k=1; k<=n; k++)
    {
        cin>>a>>b;
        max=0;
        for(i=a; i<=b; i++)
        {
            x=send(i);
            if(x>max)
            {
                pos=i;
                max=x;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,pos,max);
    }
    return 0;
}
