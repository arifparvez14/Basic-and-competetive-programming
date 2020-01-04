#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,a[10][10],b[10][10],c[10][10];
    printf("How many row & column for first array:");
    scanf("%d %d",&r1,&c1);

    printf("Enter value for first array:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%4d",&a[i][j]);
        }
    }

    printf("How many row & column for second array:");
    scanf("%d %d",&r2,&c2);

    printf("Enter value for second array:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%4d",&b[i][j]);
        }
    }
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            c[i][j]=a[i][j]+b[i][j];

        printf("\nThe sum of two array is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d",c[i][j]);
                printf("\n");}
        }
    }
    else
        printf("Addition is impossible");

}
