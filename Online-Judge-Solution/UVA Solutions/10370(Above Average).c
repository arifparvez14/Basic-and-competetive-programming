#include<stdio.h>
int main()
{
    float sum,det,result,avobe;
    int a[1001],i,d,j,b,k,countt;
    scanf("%d",&d);
    for(i=1; i<=d; i++)
    {
        countt=0,sum=0;
        scanf("%d",&b);
        for(j=0; j<b; j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];

        }
        avobe=sum/(float)b;
        det=100/(float)b;

        for(k=0; k<b; k++)
        {
            if(a[k]>avobe)
                countt=countt+1;
        }
        result=(float)countt*det;
        printf("%.3f%%\n",result);
    }
    return 0;
}




















