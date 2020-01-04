#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1000],sum,mid,count,det,k;
    while(cin>>n)
    {
        sum=count=det=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        mid=sum/n;
        sort(a,a+n);
        for(i=(n-1);i>=0;i--)
        {
            det=det+a[i];
            k=sum-det;
            if(det<=k)
                 count++;

        }
        cout<<count+1<<endl;

    }
    return 0;
}
