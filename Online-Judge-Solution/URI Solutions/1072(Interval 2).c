#include<stdio.h>
int main()
{

    int i,a,in=0,out=0,n;
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        scanf("%d",&n);

    if(n>=10 && n<=20)
        in++;
    else
        out++;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;

}
