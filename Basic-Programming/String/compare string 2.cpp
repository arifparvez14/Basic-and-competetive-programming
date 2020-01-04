#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s1[100],s2[100];
    int s1l,s2l,i=0,j=0;
    gets(s1);
    gets(s2);

    i=strcmp(s1,s2);
    if(i==0)
        cout<<"Equal";
    else if(i>0)
        cout<<"s2 is greater than s1";
    else
        cout<<"s1 is greater than s2";

    return 0;
}

