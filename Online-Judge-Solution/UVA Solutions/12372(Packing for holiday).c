#include<stdio.h>
int main()
{
    long long int i,a,L,W,H;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld %lld %lld",&L,&W,&H);
        if(L<=20 && W<=20 && H<=20)
            printf("Case %lld: good\n",i+1);
        else
            printf("Case %lld: bad\n",i+1);
    }
    return 0;
}
