#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,fes;
    double k[3],a,b,c;
    for(i=0;i<3;i++)
    {
        cin>>k[i];
    }
    sort(k,k+3);
    a=k[2],b=k[1],c=k[0];
    if(a>=b+c)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else
    {
        if(a*a==b*b+c*c) cout<<"TRIANGULO RETANGULO"<<endl;
        if(a*a>b*b+c*c) cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(a*a<b*b+c*c) cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(a==b && b==c && c==a) cout<<"TRIANGULO EQUILATERO"<<endl;
        if((a==b && a!=c && b!=c) || (b==c && b!=a && c!=a) || (c==a && c!=b && a!=b)) cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    return 0;
}
