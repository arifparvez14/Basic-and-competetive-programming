#include <stdio.h>
int main()
{
    int a,b,c[1000],mid1,mid2,cas=0,i,j;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        mid1=0,mid2=0;
        scanf("%d",&b);
        for(j=1; j<=b; j++)
        {
            scanf("%d",&c[j]);
        }
        if(b%2==0){
            mid1=(b/2);
            mid2=(b/2)+1;
            printf("Case %d: %d %d\n",cas+1,c[mid1],c[mid2]);
        }
        else{
            mid1=(b+1)/2;
            printf("Case %d: %d\n",cas+1,c[mid1]);
        }
        cas=cas+1;
    }

    return 0;
}



