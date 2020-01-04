#include <stdio.h>
int main()
{
    int i,n,t;
    printf("Enter your decimal value:");
    scanf("%d",&n);

    for(i=12;i>=0;i-=4)
    {
        t=(n>>i)&15;
        if(t<=10)
            printf("%d",t);
        else
            printf("%c",t+55);
    }
    return 0;

}
