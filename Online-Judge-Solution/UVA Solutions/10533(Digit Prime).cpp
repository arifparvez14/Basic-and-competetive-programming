#include<bits/stdc++.h>
using namespace std;
#define SIZE 1900000
long long status[SIZE];
long long digit[SIZE];

void sieve()
{
    long long i,j;
    for(i=0; i<SIZE; i++)
        status[i]= 0;
    long long sq = sqrt(SIZE);
    for(i=4; i<SIZE; i+=2)
        status[i] = 1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=2*i; j<=SIZE; j+=i)
                status[j]=1;
        }
    }
    status[1] = 1;

}
long long  sum_of_digits(long long n)
{
    long long s = 0;

    while(n>0)
    {
        s += n % 10;
        n/=10;
    }
    return s;
}
int main()
{
    sieve();
    long long h,l,t,b;
    long long d=0;
    for(long long k=0; k<SIZE; k++)
    {

        if(status[k]==0 &&  status[sum_of_digits(k)]==0)
            d++;
        digit[k]=d;
    }

    cin>>t;
    for(b=0; b<t; b++)
    {

        cin>>l>>h;

        if(l==1&&h==1)
            printf("0\n");
        else
            printf("%lld\n",abs(digit[h]-digit[l-1]));
    }
    return 0;
}
