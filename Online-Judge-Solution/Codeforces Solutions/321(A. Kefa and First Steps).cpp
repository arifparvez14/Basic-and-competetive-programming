#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[100000],count=1,max=0,j=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<(n-1);i++)
    {
        if(a[i+1]>=a[i])
            count++;
        else if(a[i+1]<a[i])
        {
            j++;
            if(max<=count)
                max=count;

            count=1;
        }
    }
    if(j==0)
        cout<<count<<endl;
    else if(j!=0 && max<count)
        cout<<count;
    else
        cout<<max<<endl;

return 0;
}
