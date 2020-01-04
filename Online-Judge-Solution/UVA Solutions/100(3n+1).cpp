#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,count,n1;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        count=0;
        if(i<=j)
        {
        for(k=i; k<=j; k++)
        {
            n=0,n1=k;
            while(n1!=1)
            {
                if(n1%2==0)
                {
                    n1=n1/2;
                    n++;
                }
                else
                {
                    n1=3*n1+1;
                    n++;
                }
            }
            if(n>=count)
                count=n;
        }
        printf("%lld %lld %lld\n",i,j,count);

        }
        else
        {
        for(k=i; k>=j; k--)
        {
            n=0,n1=k;
            while(n1!=1)
            {
                if(n1%2==0)
                {
                    n1=n1/2;
                    n++;
                }
                else
                {
                    n1=3*n1+1;
                    n++;
                }
            }
            if(n>=count)
                count=n;
        }
        printf("%lld %lld %lld\n",i,j,count);
        }
    }
    return 0;
}
