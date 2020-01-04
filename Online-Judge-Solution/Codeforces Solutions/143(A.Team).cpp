#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,c,count;
    while(cin>>n)
    {
        count=0;
        for(i=1; i<=n; i++)
        {
            cin>>a>>b>>c;
            if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1) || (a==1 && b==1 && c==1))
                count++;

        }
        cout<<count<<endl;
    }
    return 0;
}


