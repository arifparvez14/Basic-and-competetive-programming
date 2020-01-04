#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100],s2[100];
    int s1l,s2l,i=0,j=0;
    gets(s1);
    gets(s2);

    while(s1[i]!='\0')
    {
        i++;
    }

    while(s2[j]!='\0')
    {
        j++;
    }
    if(i==j)
        cout<<"Equal";
    else if(i>j)
        cout<<"i is greater than j";
    else
        cout<<"j is greater than i";

    return 0;
}
