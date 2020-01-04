#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,d,rev,dif,m,k;
    char a[1000];
    while(scanf("%s",a)==1)
    {
        if(a[0]=='0')
            break;

        rev=0;
        m=atoi(a);
        k=m;
        for(i=1; i!=0; i++)
        {
            d=m%10;
            m=m/10;
            rev=rev*10+d;
            if(m==0)
                break;
        }
        if(rev>=k)
        {
            dif=rev-k;
            printf("%lld - %lld = %lld = 9 * %lld\n",rev,k,dif,dif/9);
        }
       else{
            dif=k-rev;
            printf("%lld - %lld = %lld = 9 * %lld\n",k,rev,dif,dif/9);
       }
    }
    return 0;
}
