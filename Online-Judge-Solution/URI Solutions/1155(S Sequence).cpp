#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,sum=0,n;
    for(i=1;i<=100;i++)
    {
        sum=sum+100/i;
    }
    printf("%.2f\n",sum/100);
    return 0;
}
