#include<bits/stdc++.h>
#define N 1000000
using namespace std;
void seive(int N)
{
    int i,sq,j;
    for(i=0; i<N; i++) status[i]= 0;
    sq = sqrt(N);
    for(i=4; i<=N; i+=2) status[i] = 1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=2*i; j<=N; j+=i) status[j]=1;
        }
    }
    for(i=1;i<=N;i++)
    {
        cout<<status[i];
    }
}
int main()
{
    int n,c;
    while(cin>>n>>c)
    {
    seive(n);
    }

    return 0;
}

