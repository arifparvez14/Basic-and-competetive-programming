#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,sum=0,c=0,k;
    for(i=3;i<=39;i=i+2)
    {
        c++;
        //k=pow(2,c);
        sum=sum+i/pow(2,c);
        //cout<<i<<" "<<k<<" ";
       // printf("%.2f\n",sum);

    }
    printf("%.2f\n",sum+1);
    return 0;
}
