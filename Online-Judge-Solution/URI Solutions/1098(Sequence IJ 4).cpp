#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,j;
    for(i=0,j=1; i<=2.2; i=i+.2)
    {
       cout<<"I="<<i<<" "<<"J="<<j+i<<endl;
       cout<<"I="<<i<<" "<<"J="<<j+1+i<<endl;
       cout<<"I="<<i<<" "<<"J="<<j+2+i<<endl;
    }
    return 0;
}
