#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,n1,i,k,d,d1,count,flag,x,y;
    while(cin>>x>>y)
    {
        count=0;
        if(x<=y)
        {
            for(i=x; i<=y; i++)
            {
                n=i;
                while(n!=0)
                {
                    flag=0;
                    d=n%10;
                    n1=n/10;
                    while(n1>0)
                    {
                        d1=n1%10;
                        n1=n1/10;
                        if(d==d1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                        break;
                  n=n/10;
                }
                if(flag==0)
                    count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
