#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    double R,N,AREA;
    while(cin>>R>>N)
    {
        AREA=.5*R*R*N*sin((2*PI)/N);
        printf("%.3lf\n",AREA);
    }
    return 0;
}
