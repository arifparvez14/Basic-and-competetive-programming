#include<stdio.h>
int main()
{
    int i,a,R,L,L1,L2,W,W1;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&R);
        L=R*5;
        L1=((L*45)/100);
        L2=((L*55)/100);

        W=R*3;
        W1=W/2;

        printf("Case %d:\n",i+1);
        printf("%d %d\n",-L1,W1);
        printf("%d %d\n",L2,W1);
        printf("%d %d\n",L2,-W1);
        printf("%d %d\n",-L1,-W1);

    }
    return 0;
}
