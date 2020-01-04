#include<stdio.h>
int main()
{
    int i,in=0;
    float a,sum=0;
    for(i=0; i<6; i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            sum=sum+a;
            in++;
        }
    }
    printf("%d valores positivos\n",in);
    printf("%.1f\n",sum/in);

    return 0;

}
