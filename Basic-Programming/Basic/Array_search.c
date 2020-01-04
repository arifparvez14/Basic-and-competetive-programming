#include <stdio.h>
int main()
{
    int i,n,a[100],item,found=0;
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
    printf("\nwhat item do you want to find:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(item==a[i])
            found=found+1;
        else
            continue;
    }
    if(found>=1)
        printf("Item Found");
    else
        printf("Item not Found");

}
