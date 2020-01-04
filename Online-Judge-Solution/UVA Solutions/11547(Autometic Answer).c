#include<stdio.h>
int main()
{
    int i,a,n,res,x,y;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        res=0;
        scanf("%d",&n);
        res=(((((n*567)/9)+7492)*235)/47)-498;
        if(res<0)
            res=-res;



        x=res/10;
        y=x%10;
        printf("%d\n",y);
    }

    return 0;
}
