#include<stdio.h>
int main ()
{
    int light[3][3],i,j,temp;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&light[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            temp=light[i][j];
            if(i-1>=0)temp=temp+light[i-1][j];
            if(i+1<=2)temp=temp+light[i+1][j];
            if(j-1>=0)temp=temp+light[i][j-1];
            if(j+1<=2)temp=temp+light[i][j+1];
            if(temp%2==0)printf("1");
            else printf("0");
            temp=0;
        }
        printf("\n");
    }
    return 0;
}
