#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter any decimal number:");
    scanf("%d",&n);

    printf("Equivalent octal number is:");
    for(i=15;i>=0;i-=3)
    {
        printf("%d",(n>>i) & 7);
    }
    return 0;
}
