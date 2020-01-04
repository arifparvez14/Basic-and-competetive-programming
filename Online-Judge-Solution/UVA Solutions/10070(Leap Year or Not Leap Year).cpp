#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int f1,f2,f3,l,m4,m55,m15,m100,m400,i,c=0;
    char y[100000];
    while(gets(y))
    {
        f1=0,f2=0,f3=0;
        if(c!=0)
           cout<<endl;
        m4=0,m55=0,m15=0,m100=0,m400=0;
        l=strlen(y);
        for (i=0; i<l; i++)
        {
            m4=(m4*10+y[i]-'0')%4;
            m55=(m55*10+y[i]-'0')%55;
            m15=(m15*10+y[i]-'0')%15;
            m100=(m100*10+y[i]-'0')%100;
            m400=(m400*10+y[i]-'0')%400;
        }
        if(m400==0 || m4==0 && m100 != 0)
        {
            f1=1;
            if(m55==0)
                f3=1;

        }
        if(m15==0)
            f2=1;

        if(f1==1 && f2==1 && f3==1)
        {
            cout<<"This is leap year."<<endl;
            cout<<"This is huluculu festival year."<<endl;
            cout<<"This is bulukulu festival year."<<endl;
        }
        else if(f1==1 && f2==1 && f3==0)
        {
            cout<<"This is leap year."<<endl;
            cout<<"This is huluculu festival year."<<endl;
        }
        else if(f1==1 && f2==0 && f3==1)
        {
            cout<<"This is leap year."<<endl;
            cout<<"This is bulukulu festival year."<<endl;
        }
        else if(f1==1 && f2==0 && f3==0)
        {
            cout<<"This is leap year."<<endl;
        }
        else if(f1==0 && f2==1 &&f3==0)
        {
            cout<<"This is huluculu festival year."<<endl;
        }
        else if(f1==0 && f2==0 && f3==0)
        {
            cout<<"This is an ordinary year."<<endl;
        }
        c++;
    }
    return 0;


}
