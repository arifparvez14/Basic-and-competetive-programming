#include<stdio.h>
#include<math.h>
int main()
{
    double n,p,k1,k;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        k1= log(p)/(int)n;
        k=pow(exp(1),k1);
        printf("%.0lf\n",k);
    }
    return 0;

}
