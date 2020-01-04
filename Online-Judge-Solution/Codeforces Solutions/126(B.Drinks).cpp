#include<bits/stdc++.h>
using namespace std;
int main()
{

    float a,res,sum;
    int n,i;
    while(cin>>n)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            sum=sum+a/100;

        }
        res=(sum*100)/n;
        printf("%.12f\n",res);
    }
    return 0;
}
