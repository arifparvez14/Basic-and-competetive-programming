#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,x,y,flag,k;
    while(1)
    {
        flag=0;
        cin>>n;
        if(n>=0 && n<=10)
        {
            if(flag==0)
                x=n;
            else if(flag==1)
                y=n;
            flag++;
        }
        else
            cout<<"nota invalida"<<endl;

        if(flag==2)
        {
            printf("media = %0.2f\n",(x+y)/2);
            printf("novo calculo (1-sim 2-nao)\n");
        }
        cin>>k;
        if(k<1 && k>2)
            printf("novo calculo (1-sim 2-nao)\n");
        else if(k==2)
            break;
        else
            continue;

    }
    return 0;
}
