#include<stdio.h>
int main()
{
    int i,countt=0;
    float a[10];
    for(i=0;i<6;i++){
        scanf("%f",&a[i]);
        if(a[i]>0)
            countt++;
    }
    printf("%d valores positivos\n",countt);

    return 0;

}
