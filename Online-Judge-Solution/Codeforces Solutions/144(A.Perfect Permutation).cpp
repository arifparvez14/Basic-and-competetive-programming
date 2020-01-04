#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n;
    while(cin>>n)
    {
        if(n%2==1)
            cout<<"-1";
        else
        {
            for(i=1; i<=n; i++)
            {
                if(i%2==1)
                    printf("%lld ",i+1);
                else if(i%2==0)
                    printf("%lld ",i-1);
            }
        }
        cout<<endl;
    }
    return 0;
}
