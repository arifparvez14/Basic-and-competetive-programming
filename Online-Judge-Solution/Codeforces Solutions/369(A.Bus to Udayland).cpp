#include<bits/stdc++.h>
#define max 1000000
#define ll long long int
using namespace std;
int main()
{
    char a[max];
    ll i,n,flag;
    while(cin>>n)
    {
        flag=0;
        for(i=1; i<=(n*5); i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=(n*5); i=i+5)
        {
            if(a[i]=='O' && a[i+1]=='O')
            {
                flag=1;
                a[i]='+';
                a[i+1]='+';
            }
            else if(a[i+3]=='O' && a[i+4]=='O')
            {
                flag=1;
                a[i+3]='+';
                a[i+4]='+';
            }
            if(flag==1)
                break;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            for(i=1; i<=(n*5); i++)
            {
                cout<<a[i];
                if(i%5==0)
                    cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
