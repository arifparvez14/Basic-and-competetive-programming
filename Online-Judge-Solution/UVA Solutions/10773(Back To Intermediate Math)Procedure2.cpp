#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long int i,n;
    double d,u,v,t2,t1;
    scanf("%ld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v>=u || v==0 || u==0)
            printf("Case %ld: can't determine\n",i);
        else
        {
            t2=d/(u*sin(acos((-v)/u)));
            t1=d/u;
            printf("Case %ld: %.3lf\n",i,t2-t1);
        }
    }
    return 0;
}
