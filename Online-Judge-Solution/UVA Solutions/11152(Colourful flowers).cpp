#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    double a,b,c,p,A,CA1,r1,r2,m,CA2,sun,vio,rose;
    while(cin>>a>>b>>c)
    {
        p=(a+b+c)/2;
        A=sqrt(p*(p-a)*(p-b)*(p-c));

        r1=A/p;
        CA1=PI*r1*r1;

        r2=(a*b*c)/(4*A);
        CA2=PI*r2*r2;

        sun=CA2-A;
        vio=A-CA1;
        rose=CA1;
        printf("%.4lf %.4lf %.4lf\n",sun,vio,rose);
    }
    return 0;
}
