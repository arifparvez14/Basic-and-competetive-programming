#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,a[3010],b[3010],x,flag;
    while(cin>>n)
    {
        flag=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<(n-1); i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }
        sort(b,b+(n-1));

        for(x=0; x<(n-1); x++)
        {
            if(b[x]!=(x+1))
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;

    }
    return 0;
}

