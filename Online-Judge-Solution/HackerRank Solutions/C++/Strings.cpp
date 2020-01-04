#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    char a,b;
    cin>>x;
    cin>>y;
    cout<<x.size()<<" "<<y.size()<<endl;
    cout<<x+y<<endl;
    a=x[0];
    b=y[0];
    y[0]=a;
    x[0]=b;
    cout<<x<<" "<<y;
    return 0;
}
