#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,res;
    char a[5];
    while(cin>>x>>a>>y)
    {
        if(a[0]=='%')
            res=x%y;
        else if(a[0]=='/')
            res=x/y;


        cout<<res<<endl;
    }
    return 0;
}
