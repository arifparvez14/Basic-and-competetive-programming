#include<stdio.h>
int main()
{
    int i,odd=0,even=0,positive=0,negative=0,a[10];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);

    if(a[i]>0)
        positive++;
    if(a[i]<0)
        negative++;
    if(a[i]%2==0)
        even++;
    if(a[i]%2!=0)
        odd++;

    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);

    return 0;

}
