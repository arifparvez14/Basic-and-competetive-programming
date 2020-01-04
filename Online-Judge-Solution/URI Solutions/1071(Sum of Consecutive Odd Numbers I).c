#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>=y)
    {
        for(i=x; i>=y; i--)
        {
            if(i%2!=0)
                sum=sum+i;
        }
    }
    else
    {
        for(i=y; i>=x; i--)
        {
            if(i%2!=0)
                sum=sum+i;
        }

    }
    printf("%d\n",sum);


    return 0;
}
