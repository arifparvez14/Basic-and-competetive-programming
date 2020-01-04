#include<bits/stdc++.h>
using namespace std;
int vowelChecker(char ch);
int main()
{
    char ch,result;
    cin>>ch;
    if(vowelChecker(ch))
       cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
int vowelChecker(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U')
        return 1;
    else
        return 0;
}
