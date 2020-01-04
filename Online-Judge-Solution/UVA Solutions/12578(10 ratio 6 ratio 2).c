#include <stdio.h>
#include <math.h>
int main()
{
    int i,a,L;
    double W,R,rarea,area,garea;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&L);
        W=(double)L*0.6;
        R=(double)L*0.2;
        rarea=R*acos(-1)*R;
        area=(double)L*W;
        garea=area-rarea;
        printf("%.2lf %.2lf\n",rarea,garea);

    }
    return 0;

}
