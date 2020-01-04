#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num,x,y;
    while(cin>>num)
    {
        if(num>=0 && num<=400.00)
        {
            x=num+(num*15)/100;
            y=(num*15)/100;
            printf("Novo salario: %.2f\n",x);
            printf("Reajuste ganho: %.2f\n",y);
            printf("Em percentual: 15 %\n");
        }
        else if(num>400.00 && num<=800.00)
        {
            x=num+(num*12)/100;
            y=(num*12)/100;
            printf("Novo salario: %.2f\n",x);
            printf("Reajuste ganho: %.2f\n",y);
            printf("Em percentual: 12 %\n");
        }
        else if(num>800.00 && num<=1200.00)
        {
            x=num+(num*10)/100;
            y=(num*10)/100;
            printf("Novo salario: %.2f\n",x);
            printf("Reajuste ganho: %.2f\n",y);
            printf("Em percentual: 10 %\n");
        }
        else if(num>1200.00 && num<=2000.00)
        {
            x=num+(num*7)/100;
            y=(num*7)/100;
            printf("Novo salario: %.2f\n",x);
            printf("Reajuste ganho: %.2f\n",y);
            printf("Em percentual: 7 %\n");
        }
        else if(num>2000.00)
        {
            x=num+(num*4)/100;
            y=(num*4)/100;
            printf("Novo salario: %.2f\n",x);
            printf("Reajuste ganho: %.2f\n",y);
            printf("Em percentual: 4 %\n");
        }

    }
    return 0;
}
