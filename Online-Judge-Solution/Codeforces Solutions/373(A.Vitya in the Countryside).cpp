#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,u,flag;
    char v[100];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&v[i]);
    }
    if(n==1)
    {
        if(v[n]==15)
            cout<<"DOWN"<<endl;
        else if(v[n]==0)
            cout<<"UP"<<endl;
        else
            cout<<"-1"<<endl;
    }
    else if(v[n]==15 && v[n-1]==14)
        cout<<"DOWN"<<endl;
    else if(v[n]==0 || v[n-1]==1)
        cout<<"UP"<<endl;
    else if(v[n]>v[n-1])
         cout<<"UP"<<endl;
    else
         cout<<"DOWN"<<endl;

    return 0;
}
