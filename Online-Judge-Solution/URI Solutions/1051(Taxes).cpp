#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,res;
    while(cin>>x)
    {
        if(x<=2000.00)
            printf("Isento\n");
        else if(x>2000 && x<=3000)
        {
            res=((x-2000)*8)/100;
            printf("R$ %.2f\n",res);
        }
        else if(x>3000 && x<=4500)
        {
            res=((1000*8)/100)+(((x-3000)*18)/100);
            printf("R$ %.2f\n",res);
        }
        else if(x>4500)
        {
            res=((1000*8)/100)+((1500*18)/100)+(((x-4500)*28)/100);
            printf("R$ %.2f\n",res);
        }
    }
    return 0;
}
