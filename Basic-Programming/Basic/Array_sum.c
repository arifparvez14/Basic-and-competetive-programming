#include <stdio.h>
int main()
{
    int i,n,a[100],sum=0;
    printf("How many number do u want:");
    scanf("%d",&n);

    printf("Enter Elements of array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("The elements are:");
    for(i=1;i<=n;i++)
    {
        printf("%4d",a[i]);
        sum=sum+a[i];
    }
    printf("\nThe summation of array is:%d",sum);
    return 0;

}

