#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,v,w,x,y,z,flag;
    while(cin>>a>>b>>c>>d>>e>>v>>w>>x>>y>>z)
    {
       flag=0;
       if(a==v || b==w || c==x || d==y || e==z)
         flag=1;

       if(flag==0)
         printf("Y\n");
       else
         printf("N\n");
    }
    return 0;
}
