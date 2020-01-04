#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 32;
    int i,c=0,num;
    cin>>num;

    for(i=0;i<n;i++){
        if(num & (1<<i)) c++;
    }
    printf("Number of 1 is: %d",c);
    return 0;
}

