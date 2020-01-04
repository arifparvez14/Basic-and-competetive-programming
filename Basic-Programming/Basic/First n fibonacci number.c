#include <stdio.h>
int main()
{
    long a=0,b=1,c;
    int i,n;
    printf("How many number do u want?????");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%ld ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
