#include <stdio.h>
int main()
{
    int i,n,a[100],x;
    printf("How many number do u want:");
    scanf("%d",&n);

    printf("\nEnter Elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("The elements are:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\nwhat position do u want to insert:");
    scanf("%d",&x);

    for(i=n;i>x;i--)
    {
        a[i]=a[i-1];
    }
    printf("\nInput value:");
    scanf("%d",&a[x]);

    printf("\nnew inserted array is:");
    for(i=0;i<n+1;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;


}

