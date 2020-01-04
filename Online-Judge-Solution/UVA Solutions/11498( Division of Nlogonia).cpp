#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,x,y,i,x1,y1;
    while(cin>>t && t!=0)
    {
        cin>>n>>m;
        for(i=1;i<=t;i++)
        {
            cin>>x>>y;
            if(x==n || y==m ||(x==n && y==m))
                printf("divisa\n");
            else
            {
                x1=x-n;
                y1=y-m;
                if(x1>0 && y1>0)
                    printf("NE\n");
                else if(x1<0 && y1>0)
                    printf("NO\n");
                else if(x1<0 && y1<0)
                    printf("SO\n");
                else if(x1>0 && y1<0)
                    printf("SE\n");

            }
        }
    }
    return 0;
}
