#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,c=0,d=0,o=0;
    getline(cin, str);
    for(i=0;i<str.size();i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            c++;
        else if(str[i]>='0' &&str[i]<='9')
            d++;
        else
            o++;
    }
    cout<<"Character:";cout<<c<<endl;
    cout<<"Number:";cout<<d<<endl;
    cout<<"Other character:";cout<<o<<endl;
    return 0;
}
