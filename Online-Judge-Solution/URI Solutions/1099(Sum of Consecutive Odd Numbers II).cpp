#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,sum,t,k;
    while(cin>>t)
    {
        for(k=1; k<=t; k++)
        {
            cin>>x>>y;
            sum=0;
            if(x<=y)
            {
                for(i=x+1; i<y; i++)
                {
                    if(i%2!=0)
                        sum=sum+i;
                }
            }
            else
            {
                for(i=y+1; i<x; i++)
                {
                    if(i%2!=0)
                        sum=sum+i;
                }

            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
