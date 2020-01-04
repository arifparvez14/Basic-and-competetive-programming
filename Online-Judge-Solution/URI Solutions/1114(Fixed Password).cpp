#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    while(1)
    {
        cin>>n;
        if(n==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            flag=1;
        }
        else
            cout<<"Senha Invalida"<<endl;

        if(flag==1)
            break;
    }
    return 0;
}
