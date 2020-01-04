#include<bits/stdc++.h>
using namespace std;
int main()
{
    int startIndex=0,endIndex,i;
    string s;
    getline(cin,s);
    endIndex=s.size()-1;

    while(startIndex<=endIndex)
    {
        if(s[startIndex]!=s[endIndex])
            break;
        startIndex++;
        endIndex--;
    }
    if(startIndex>=endIndex)
        cout<<"Palidroma";
    else
        cout<<"Not a Palidroma";
    return 0;
}
