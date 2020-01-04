#include<bits/stdc++.h>
#include <algorithm>
#define ll long long int
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
