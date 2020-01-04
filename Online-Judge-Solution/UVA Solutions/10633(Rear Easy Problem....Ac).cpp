#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,y,x;
    while(cin>>n && n!=0)
    {
        if(n>9)
        {

            y=(n*10)/9;
            x=y-1;
            if(n%9==0)
            {
                cout<<x<<" "<<y<<endl;
            }
            else
                cout<<y<<endl;
        }
    }

    return 0;
}
