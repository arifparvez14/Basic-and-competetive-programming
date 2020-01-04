#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,r,k,k1;
    while(cin>>a>>b>>c)
    {
        if(a==0 || b==0 || c==0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
            k=(a+b+c)/2;
            k1=k*(k-a)*(k-b)*(k-c);
            r=(sqrt(k1))/k;
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
