#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,count,total,x;
    while(cin>>n && n!=0)
    {
        count=0;
        for(i=1; i<=(n/2); i++)
        {
            for(j=1; j<=(n/2); j++)
            {
                if(i==j)
                    continue;
                for(x=2; x<=(n/2); x++)
                {
                    k=i*x;
                    l=j*x;
                    if(k<=n && l<=n)
                        count++;
                }
            }
        }
            total=(n*n)-count-(n-1);
        cout<<total<<"\n";
    }
    return 0;
}
