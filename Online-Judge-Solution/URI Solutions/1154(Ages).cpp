#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,sum,c;
    sum=c=0;
    while(1)
    {
        cin>>a;
        if(a<0)
            break;
        else
        {
            c++;
            sum=sum+a;
        }
    }
    printf("%.2f\n",sum/c);
    return 0;
}
