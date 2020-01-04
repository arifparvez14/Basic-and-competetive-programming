#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k=0;
    double u,v,t,a,s,s1,v1;
    while(scanf("%d",&n)==1 && n!=0)
    {
        u=0,v=0,t=0,a=0,s=0,s1=0;
        if(n==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",k+1,s,a);
        }
        else if(n==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            s1=(v*v)-(u*u);
            s=s1/(2*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",k+1,s,t);

        }
        else if(n==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v1=(u*u)+(2*a*s);
            v=sqrt(v1);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",k+1,v,t);

        }
        else if(n==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",k+1,u,t);
        }

        k++;
    }

    return 0;
}
