#include <stdio.h>
int main()
{
    int i,n,a[100];
    printf("How many number do u want:");
    scanf("%d",&n);

    printf("\nEnter Elements of array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("The elements are:");
    for(i=1;i<=n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;

}
