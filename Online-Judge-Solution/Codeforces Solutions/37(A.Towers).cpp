#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[1010],n,i,k,sum,count;
    while(cin>>n)
    {
        k=1,sum=0,count=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
                k++;
            else
            {
                if(sum<k)
                {
                    sum=k;
                    count++;
                }
            }

        }
        cout<<sum<<count;
    }
    return 0;
}
