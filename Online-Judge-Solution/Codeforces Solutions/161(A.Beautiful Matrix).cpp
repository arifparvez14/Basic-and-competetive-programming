#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],i,j,k=0,l=0,ans;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                k=i;
                l=j;
                break;
            }
        }
    }
    ans=abs(2-k)+abs(2-l);
    cout<<ans;
    return 0;
}
