#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y,n;
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            cin>>x>>y;
            if(x==0)
                cout<<"0.0"<<endl;
            else if(y==0)
                cout<<"divisao impossivel"<<endl;
            else
                printf("%.1f\n",x/y);
        }

    }
    return 0;
}
