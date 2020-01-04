#include <stdio.h>
int main()
{
    int array[100];
    int i, j,k, num, temp,count,value;
    scanf("%d",&value);
    for(k=0; k<value; k++)
    {
        count=0;
        scanf("%d", &num);
        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < (num - i - 1); j++)
            {
                if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    count=count+1;
                }
            }
        }
     printf("Optimal train swapping takes %d swaps.\n",count);
    }

    return 0;
}
