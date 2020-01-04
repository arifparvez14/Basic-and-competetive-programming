#include<bits/stdc++.h>
using namespace std;
void sieve(int SIZE,int n)
{
    int i,j,count=0,num,h,mid;
    int status[SIZE],result[10000];
    for(i=0; i<=SIZE; i++) status[i]= 0;
    int sq = sqrt(SIZE);
    for(i=4; i<=SIZE; i+=2) status[i] = 1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=2*i; j<=SIZE; j+=i) status[j]=1;
        }
    }
    status[1] = 0;
    int d=1;
    for(int k=1 ; k<=SIZE; k++)
    {
        if(status[k]==0)
        {
            result[d]=k;
            d++;
        }
    }
    if((d-1)%2==0)
    {
        mid=((d-1)/2)-1;

    }
    else if((d-1)%2==1)
    {
         mid=((d-1)/2);
    }

}
int main()
{
    int x,c;
    while(cin>>x>>c)
    {
        if(x==1)
        {
            printf("%d %d: 1\n",x,c);
        }
        else
            sieve(x,c);
    }

    return 0;
}

