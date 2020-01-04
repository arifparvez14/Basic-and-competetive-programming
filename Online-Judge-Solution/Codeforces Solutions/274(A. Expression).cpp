#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x[10];
    cin>>a>>b>>c;
    x[0]=a+b+c;
    x[1]=a*b*c;
    x[2]=a+(b*c);
    x[3]=a*(b+c);
    x[4]=(a+b)*c;
    x[5]=(a*b)+c;
    /*for(int i=0;i<=5;i++)
    {
       cout<<x[i]<<endl;
    }*/
    sort(x,x+6);
    cout<<x[5]<<endl;
    return 0;

}
