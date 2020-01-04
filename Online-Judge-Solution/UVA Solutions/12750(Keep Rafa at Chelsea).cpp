#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    long int t,n,i,j,l,k,count,s,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        count=0,s=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(k=0;k<n;k++)
        {
            s++;
            if(a[k]!='W')
            {
                count++;
                if(count==3)
                    break;
            }
            else
                count=0;
        }
        if(count==3)
           printf("Case %ld: %ld\n",i,s);
        else
           printf("Case %ld: Yay! Mighty Rafa persists!\n",i);
           a="";
    }
    return 0;
}
