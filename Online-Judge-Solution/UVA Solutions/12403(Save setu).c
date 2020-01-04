#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum,k;
    char s3[10];
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%s",s3);
        if(s3[0]=='d')
        {
           scanf("%d\n",&k);
           sum=sum+k;
        }
        if(s3[0]=='r')
        {
            printf("%d\n",sum);
        }
    }

    return 0;
}
