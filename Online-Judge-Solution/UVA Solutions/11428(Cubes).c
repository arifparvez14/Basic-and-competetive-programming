#include<stdio.h>
int main()
{
    int i,j,n,k;
    while(scanf("%d",&n)==1 && n!=0)
    {
        int flag=0;
        for(i=2; i<=n; i++){
            for(j=1; j<=i; j++){
                k=(i*i*i)-(j*j*j);
                if(n==k)
                {
                    printf("%d %d\n",i,j);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            printf("No solution\n");

    }
    return 0;
}
