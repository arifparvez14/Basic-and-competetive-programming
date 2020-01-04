#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,n,x,y,v,res,res1,value;
    int i;
    while(scanf("%lf %lf %lf",&a,&b,&n)==3)
    {
        value=10000;
        for(i=1;i<=n;i++)
        {
            scanf("%lf %lf %lf",&x,&y,&v);
            res=abs((a-x)*(a-x))+abs((b-y)*(b-y));
            res1=sqrt(res)/v;
            if(res1<=value)
                value=res1;

        }
          printf("%.20lf\n",value);
    }
    return 0;
}
