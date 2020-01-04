#include <stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    while(a%b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("GCD=%d",b);
    return 0;
}
