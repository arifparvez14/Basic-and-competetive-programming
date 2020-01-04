#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    double r,result,area1,area2;
    int i,a;


    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%lf",&r);

        area1=(r*2)*(r*2);
        area2=(pi*r*r);
        result=area1-area2;
        printf("Case %d: %.2lf\n",i,result);
    }
    return 0;
}

