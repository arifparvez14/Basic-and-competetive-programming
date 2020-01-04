#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int h1,m1,h2,m2,time;
    while(cin>>h1>>m1>>h2>>m2 )
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        if(h1==0)
            h1=24;
        if(h2==0)
            h2=24;
        if(h2>h1)
        {
            if(m2>=m1)
                time=((h2-h1)*60)+(m2-m1);
            else
                time=((h2-h1)*60)-(m1-m2);
        }
        else if(h1>h2)
        {
            if(m2>=m1)
                time=(((h2+24)-h1)*60)+(m2-m1);
            else
                time=(((h2+24)-h1)*60)-(m1-m2);
        }
        else if(h1==h2)
        {
            if(m2>m1)
                time=m2-m1;
            else if(m1>m2)
                time=(24*60)-(m1-m2);
            else if(m1==m2)
                time=m2-m1;
        }
        cout<<time<<endl;
    }
    return 0;
}
