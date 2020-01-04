#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        if((i==1 || i==N) && (j==1 || j==N))
            {
                printf("0");
            }
            else if(i==1 || i==N || j==1 || j==N)
            {
                // Print edge
                printf("1");
            }
            else
            {
                // Print center
                printf("0");
            }
        cout<<endl;
    }
    return 0;
}







