#include<stdio.h>
#define pi 3.14159
int main()
{
    int R;
    double AREA;
    scanf("%d",&R);

    AREA=(4.0/3)*pi*R*R*R;

    printf("VOLUME = %.3lf\n",AREA);

    return 0;

}
