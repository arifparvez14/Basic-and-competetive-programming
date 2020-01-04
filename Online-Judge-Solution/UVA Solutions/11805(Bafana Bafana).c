#include <stdio.h>
int main()
{
    int n,k,p,a,i,s,countt=0,sum;
    scanf("%d",&a);

    for(i=0;i<a;i++){
        scanf("%d %d %d",&n,&k,&p);
        s=(k+p)%n;
        if(k+p<n)
            printf("Case %d: %d\n",countt+1,k+p);
        else if(s==0)
            printf("Case %d: %d\n",countt+1,n);
        else
            printf("Case %d: %d\n",countt+1,s);
    countt++;
    }
    return 0;
}
