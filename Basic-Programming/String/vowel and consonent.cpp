#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,v=0,c=0;
    getline(cin, str);
    for(i=0;i<str.size();i++)
    {
       if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
               v++;
        else
            c++;
    }
    cout<<"Vowel:";cout<<v<<endl;
    cout<<"Consonent:";cout<<c<<endl;
    return 0;
}

