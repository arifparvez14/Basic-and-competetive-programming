#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter Decimal Number:");
    scanf("%d",&n);

    for(i=15;i>=0;i--)
    {
        printf("%d",(n>>i) & 1);
    }
    return 0;
}
