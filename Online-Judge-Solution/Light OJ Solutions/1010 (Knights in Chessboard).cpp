#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,i,j,k,c=0;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>m>>n;
        if(m == 1)
            k = n;
        else if(n == 1)
            k = m;

        else if(n == 2)
        {
            k = (m / 4) * 4;
            if(m % 4 == 1)
                k += 2;
            else if(m % 4 > 1)
                k += 4;
        }
        else if(m == 2)
        {
            k = (n / 4) * 4;
            if(n % 4 == 1)
                k += 2;
            else if(n % 4 > 1)
                k += 4;
        }
        else
        {
            k = ((m * n) + 1) / 2;
        }
        printf("Case %lld: %lld\n",++c,k);

    }
    return 0;

}

