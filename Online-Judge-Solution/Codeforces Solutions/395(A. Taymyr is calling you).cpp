#include<bits/stdc++.h>
#define fuck long long int
#define suck 1000000
using namespace std;
int main()
{
    fuck n,m,z,i,j,k,l,c,a[suck],b[suck];
    while(cin>>n>>m>>z)
    {
        k=l=c=0;
        fuck x=n;fuck y=m;
        for(i=x;i<=z;i=i+n)
        {
            a[k]=i;
            k++;
        }
        for(i=y;i<=z;i=i+m)
        {
            b[l]=i;
            l++;
        }
        for(i=0;i<k;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(a[i]==a[j])
                    c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;

}
