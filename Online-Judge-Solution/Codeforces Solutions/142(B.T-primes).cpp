#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;
const int maxn=1000000+5;
int a[maxn+1];

void isprime()
{
    a[0]=a[1]=1;
    memset(a,0,sizeof(a));
    for(int i=2;i<=maxn;i++)
    {
        if(!a[i])
        {
            for(int j=i+i;j<=maxn;j+= i)
            {
                a[j]=1;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    isprime();
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll x=sqrt(n)+0.5;
        if(x>1&&x*x==n&&a[x]==0)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

