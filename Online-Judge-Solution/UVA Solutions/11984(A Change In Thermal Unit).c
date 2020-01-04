#include <stdio.h>
int main()
{
    float c1,f1,c2,f2,df;
    int i,t,countt=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {

        scanf("%f %f",&c1,&df);

        f1=((9*c1)/5)+32;
        f2=df+f1;
        c2=((f2-32)/9)*5;

        printf("Case %d: %.2f\n",countt+1,c2);

        countt++;
    }
    return 0;
}







