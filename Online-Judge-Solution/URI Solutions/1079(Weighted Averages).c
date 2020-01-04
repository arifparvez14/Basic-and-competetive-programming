#include<stdio.h>
int main()
{
    int i,n;
    float n1,n2,n3,res;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%f %f %f",&n1,&n2,&n3);
        res=((n1*2)+(n2*3)+(n3*5))/10.0;
        printf("%.1f\n",res);
    }
    return 0;
}
