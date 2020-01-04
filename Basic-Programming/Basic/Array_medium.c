int main()
{
    int i,n,a[100],j,temp;
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
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;}
            else
                continue;
        }
    }
    printf("\nThe present array is");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);


    if(n%2==0)
        printf("\nMedium=%d",a[n/2]);
    else
        printf("\nMedium=%d and %d",a[n/2-1],a[n/2]);
}


