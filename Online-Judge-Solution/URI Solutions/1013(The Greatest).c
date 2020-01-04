#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);

    d=(a+b+abs(a-b))/2;
    if(d>c)
        printf("%d eh o maior\n",d);
    else
        printf("%d eh o maior\n",c);

    return 0;

}
