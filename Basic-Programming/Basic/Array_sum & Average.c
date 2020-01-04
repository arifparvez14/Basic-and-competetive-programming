#include <stdio.h>
int main()
{
    int i,n,a[100],sum=0;
    float ave;
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
    ave=sum/n;
    printf("\nThe summation of array is:%d",sum);
    printf("\nAverage is:%.2f",ave);
    return 0;

}

