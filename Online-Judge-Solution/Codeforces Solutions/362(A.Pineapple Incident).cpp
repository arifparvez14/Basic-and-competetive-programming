#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,x,i,status;
    while(scanf("%d %d %d",&t,&s,&x)==3)
    {
        status=0;
        if(x>s)
        {
            if((t+1)==x)
                status=0;
            else
            {
                for(i=t; i<=x; i=i+s)
                {
                    if(i==x || (i+1)==x)
                        status=1;
                }
            }
        }
        else
        {
            if(t==x || (t+s)==x)
                status=1;
        }
        if(status==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}


