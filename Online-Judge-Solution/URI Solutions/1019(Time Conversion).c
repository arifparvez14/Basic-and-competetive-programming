#include<stdio.h>
int main()
{
    int n,hour=0,minute=0;

    scanf("%d",&n);

    hour=n/3600;
    n=n%3600;

    minute=n/60;
    n=n%60;

    printf("%d:%d:%d\n",hour,minute,n);

}
