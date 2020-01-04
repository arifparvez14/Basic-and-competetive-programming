#include<bits/stdc++.h>
using namespace std;
long long int palindrome(long long int z)
{
    long long int y,revi;
    revi=0;
    while(z!=0)
    {
       y=z%10;
       revi=revi*10+y;
       z=z/10;
    }
    return revi;
}
int main()
{
    long long int n,i,k,d,rev,sum,count,l,T,x,j,check;
    cin>>T;
    for(x=1; x<=T; x++)
    {
        count=0,sum=0;
        cin>>n;
        for(i=1; i!=0; i++)
        {
            rev=0;
            k=n;
            while(n>0)
            {
                d=n%10;
                rev=rev*10+d;
                n=n/10;
            }
            count++;
            sum=rev+k;
            check=palindrome(sum);
            if(sum-check==0)
                break;

                n=sum;

        }

        printf("%lld %lld\n",count,sum);
    }
    return 0;
}
