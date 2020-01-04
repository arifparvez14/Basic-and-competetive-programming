#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll testCase, caseCheck, value, i;
    set<long long int>s;
    set<long long int>::iterator it;
    cin>>testCase;
    for(i=1; i<=testCase; i++)
    {
        cin>>caseCheck>>value;
        if(caseCheck == 1)
        {
            s.insert(value);
        }
        else if(caseCheck == 2)
        {
            s.erase(value);
        }
        else if(caseCheck == 3)
        {
            it = s.find(value);
            if(it == s.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}
