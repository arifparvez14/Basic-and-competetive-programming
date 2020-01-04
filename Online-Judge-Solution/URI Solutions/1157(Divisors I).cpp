#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a[100000],k=0,n;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                a[k]=i;
                k++;
            }
        }
        for(i=0;i<k;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
