#include <stdio.h>
int main()
{
    int i,n,a[100],x;
    int max=0,min;
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
    scanf("%d",x);
    printf("\nInput value:");
    scanf("%d",&a[x]);
    for(i=x+1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nnew inserted array is:");
    for(i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
    return 0;


}

