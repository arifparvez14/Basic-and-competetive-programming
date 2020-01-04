#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,x,y,z;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        if(x+y>z && y+z>x && z+x>y)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}
