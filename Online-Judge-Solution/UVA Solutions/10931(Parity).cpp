#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,count,d,m,a[1000],c,s,i,j;
    while(cin>>n && n!=0)
    {
        count=0;
        c=1;
        m=n;
        while(n!=0)
        {
           d=n%2;
           n=n/2;
           a[c]=d;
           if(d==1)
            count++;
            c++;
        }
         printf("The parity of ");
        for(j=(c-1);j>=1;j--)
        {
            printf("%lld",a[j]);
        }

        printf(" is %lld (mod 2).\n",count);
    }
    return 0;
}
