#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    //cin>>N;

    for(i=1;i<=5;i++)
    {
        for(j=5; j>5-i; j--)
        {
            printf("%d", j);
        }

        for(j=1; j<=5-i; j++)
        {
            printf("%d", (5 - i + 1));
        }
        cout<<endl;
    }
    return 0;
}











