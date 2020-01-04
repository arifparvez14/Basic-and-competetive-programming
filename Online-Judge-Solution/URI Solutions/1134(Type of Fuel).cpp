#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,g,d;
    a=g=d=0;
    while(1)
    {
       cin>>n;
        if(n==4)
            break;
        else if(n==1)
            a++;
        else if(n==2)
            g++;
        else if(n==3)
            d++;
    }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",a);
        printf("Gasolina: %d\n",g);
        printf("Diesel: %d\n",d);

    return 0;
}
