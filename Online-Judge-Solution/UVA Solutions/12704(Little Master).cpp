#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z,r,sd,ld;
    int T,i;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>x>>y>>r;
        if(x==0 && y==0)
        {
            sd=r;
            ld=r;
            printf("%.2lf %.2lf\n",sd,ld);
        }
        else
        {
            z=sqrt(x*x+y*y);
            sd=r-z;
            ld=r+z;
            printf("%.2lf %.2lf\n",sd,ld);
        }
    }

    return 0;
}
