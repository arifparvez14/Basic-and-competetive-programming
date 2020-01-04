#include<stdio.h>
int main()
{

    int note,hundred,fifty,twenty,ten,five,two,one;

    scanf("%d",&note);
    printf("%d\n",note);

    hundred=note/100;
    note=note%100;

    fifty=note/50;
    note=note%50;

    twenty=note/20;
    note=note%20;

    ten=note/10;
    note=note%10;

    five=note/5;
    note=note%5;

    two=note/2;
    note=note%2;


    one=note/1;
    note=note%1;

    printf("%d nota(s) de R$ 100,00\n",hundred);
    printf("%d nota(s) de R$ 50,00\n",fifty);
    printf("%d nota(s) de R$ 20,00\n",twenty);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);

    return 0;

}
