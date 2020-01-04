#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    float z;
    printf("Enter the value of x & y (seperated by space):");
    scanf("%d %d",&x,&y);

    printf("%d to the power of %d=%f",x,y,pow(x,y));
    return 0;

}
