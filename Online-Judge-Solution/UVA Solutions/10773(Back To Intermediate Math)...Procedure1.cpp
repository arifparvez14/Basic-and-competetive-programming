#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    double u,v,d;
    double t1,t2,t,a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if((v>=u)||(v<=0)||(u<=0)||(d<=0))
            printf("Case %d: can't determine\n",i);
        else
        {
            a=sqrt((u*u-v*v)*1.0);
            t1=((1.0)*d)/((1.0)*a);
            t2=((1.0)*d)/((1.0)*u);
            t=fabs(t1-t2);
            printf("Case %d: %.3lf\n",i,t);
        }
    }
    return 0;
}
