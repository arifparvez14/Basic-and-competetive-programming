#include<stdio.h>
int main()
{
    int i,a[100],value=-1,pos;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=value)
        {
            value=a[i];
            pos=i;
        }
    }
    printf("%d\n",value);
    printf("%d\n",pos);

    return 0;
}

