#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;;
    while(cin>>n)
    {
        i=1;
        while(1)
        {
            printf("%d %d %d PUM\n",i,i+1,i+2);
            i=i+4;
            count++;
            if(count==n)
                break;
        }

    }
    return 0;
}
