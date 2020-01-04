#include<bits/stdc++.h>
#define  max 100009
using namespace std;
int main()
{
    long long int n,c,i,det;
    long long int v[max];
    while((scanf("%lld %lld",&n,&c))==2)
    {
        det=1;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&v[i]);
        }
        for(i=2; i<=n; i++)
        {
            if(v[i]-v[i-1]>c)
                det=0;
            det++;


        }
        cout<<det<<endl;
    }
    return 0;
}
