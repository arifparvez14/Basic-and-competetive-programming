#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,c,d,T;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d && d==a)
            cout<<"square\n";
        else if((a==b && c==d) || (a==c && b==d) ||(a==d && b==c))
            cout<<"rectangle\n";
        else if((a<(b+c+d)) && (b<(a+c+d)) && (c<(b+a+d)) && (d<(b+c+a)))
            cout<<"quadrangle\n";
        else
            cout<<"banana\n";

    }
    return 0;

}
