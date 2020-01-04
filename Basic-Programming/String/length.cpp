#include<bits/stdc++.h>
using namespace std;
int main()
{
    char text[100];
    int i;
    int count=0;

    gets(text);
    for(i=0;text[i]!='\0';i++)
    {
        count++;
    }
    cout<<count;
    return 0;
}
