#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,ang,x,y,z;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        if(a<b)
            x=(40+a)-b;
        else if(a==b)
            x=0;
        else
            x=a-b;

        if(c<b)
            y=(40+c)-b;
        else if(c==b)
            y=0;
        else
            y=c-b;

        if(c<d)
            z=(40+c)-d;
        else if(c==d)
            z=0;
        else
            z=c-d;

        ang=1080+x*9+y*9+z*9;
        cout<<ang<<"\n";
    }
    return 0;
}
