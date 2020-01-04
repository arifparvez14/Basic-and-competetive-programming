#include<stdio.h>
int main()
{
    int a,i,b,j,value,sum;
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {

        scanf("%d",&b);
        sum=0;
        for(j=1; j<=b; j++)
        {
            scanf("%d",&value);
            if(value>=0)
            {
                sum=sum+value;
            }

        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;

}

