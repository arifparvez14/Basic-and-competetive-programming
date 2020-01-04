#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,c,i;
    while(cin>>n)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            cin>>x>>y;
            if((y-x)>=2)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
