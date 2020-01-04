#include<stdio.h>
int main()
{
    int i,n,countt=0;
    scanf("%d",&n);

    for(i=n; i<(n+100); i++)
    {
        if(i%2!=0)
        {
            countt++;
            printf("%d\n",i);
            if(countt==6)
                break;
        }

    }
    return 0;

}
