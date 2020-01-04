#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,a,i,j;
    char ch[300][300];
    while((scanf("%d %d",&n,&m))==2)
    {
        int status=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>ch[i+j];
                if(ch[i][j]=='C' || ch[i][j]=='M' || ch[i][j]=='Y')
                    status=1;
            }
        }
        if(status==0)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}
