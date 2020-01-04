#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    double x,y,z,f1,f2;
    cin>>T;
    while(T--)
    {
    cin>>x>>y>>z;
    if(x>y)
    {
        f1=(z/(x+y))*(y-(x-y));
        f2=(int)(z-f1);
        printf("%.lf\n",f2);
    }
    else if(x<y)
    {
        f1=(z/(x+y))*(y+(y-x));
        f2=(int)(z-f1);
        printf("%.lf\n",f2);
    }
    else if(x==y)
    {
        f2=(int)(z/2);
        printf("%.lf\n",f2);
    }
    }
    return 0;
}
