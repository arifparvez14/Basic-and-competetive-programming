#include<bits/stdc++.h>
using namespace std;
long long int revncheck(long long int num)
{
    long long int d,sum=0,x,issprime=0,y;
    for(x=1; x!=0; x++)
    {
        d=num%10;
        num=num/10;
        sum=sum+d;
        if(num==0)
            break;
    }
    if(sum==2)
        issprime=1;
    else if(sum%2==0)
        issprime=0;
    else
    {
        issprime=1;
        for(y=3; y<=sqrt(sum); y++)
        {
            if(sum%y==0)
            {
                issprime=0;
                break;
            }
        }
    }
    return issprime;
}
int main()
{
    long long int n,i,j,isprime,t1,t2,k,d,l,z,count;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld",&t1,&t2);
        count=0;
        for(j=t1; j<=t2; j++)
        {
            isprime=0;
            if(j==2)
                isprime=1;
            else if(j%2==0)
                isprime=0;
            else
            {
                isprime=1;
                for(k=3; k<=sqrt(j); k++)
                {
                    if(j%k==0)
                    {
                        isprime=0;
                        break;
                    }
                }
            }
            z=revncheck(j);
            if(isprime==1 && z==1)
                count++;

        }
        printf("%lld\n",count);
    }
    return 0;
}


