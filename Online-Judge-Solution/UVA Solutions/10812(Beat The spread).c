#include<stdio.h>
int main()
{
    int i,n,s,d,n1,n2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&s,&d);
        if(s>=d &&(s+d)%2==0)
        {
            n1=(s+d)/2;
            n2=(s-d)/2;
            printf("%d %d\n",n1,n2);
        }
        else
            printf("impossible\n");

    }
    return 0;
}
