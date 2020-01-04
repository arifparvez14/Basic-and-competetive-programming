#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,sum,k,x,y,c,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=c=0;
        cin>>x>>y;
        if(x%2==0)
        {
            k=x+1;
            while(1)
            {
                if(c==y)
                    break;
                sum=sum+k;
                c++;
                k=k+2;
            }
        }
        else
        {
            k=x;
            while(1)
            {
                if(c==y)
                    break;
                sum=sum+k;
                c++;
                k=k+2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
