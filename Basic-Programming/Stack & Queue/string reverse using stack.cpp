#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s)
{
    stack<char>Stack;
    for(int i=0;i<s.length();i++)
        Stack.push(s[i]);
    for(int i=0;i<s.length();i++)
    {
        s[i]=Stack.top();
        Stack.pop();
    }
}
int main()
{
    string s;
    cin>>s;
    reverseString(s);
    cout<<s;
    return 0;
}
