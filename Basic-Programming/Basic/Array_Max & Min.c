#include <stdio.h>
int main()
{
    int i,n,a[100];
    int max=0,min;
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
    for(i=1;i<=n;i++)
    {
        if (max<=a[i])
        max=a[i];

    }
    printf("\nThe maximum number is:%d",max);
    for(i=1;i<=n;i++)
    {
        min=a[1];
        if(min>=a[i])
        min=a[i];
    }
    printf("\nThe minimum number is:%d",min);

}
