#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,count;
    while(cin>>n>>m)
    {
        for(i=(n+1);;i++)
        {
            count=0;
            for(j=1;j<i;j++)
            {
                if((i%j)==0)
                    count++;
            }
            if(count==1)
                    break;
        }
        if(i==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
