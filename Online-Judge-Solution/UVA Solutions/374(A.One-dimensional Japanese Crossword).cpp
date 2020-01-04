#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count,k,j;
    char a[110];
    int b[110];
    cin>>n;

    count=0,k=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]=='B')
        {
            for(j=i; ; j++)
            {
                if(a[j]=='B')
                {
                    count++;
                }
                else
                {
                    b[k]=count;
                    k++;
                    count=0;
                    break;
                }
                i=j;
            }
        }
        else
            continue;
    }
    cout<<k<<endl;
    for(i=0; i<k; i++)
    {
        cout<<b[i];
        if(i<(k-1))
            cout<<" ";
    }
    return 0;
}
