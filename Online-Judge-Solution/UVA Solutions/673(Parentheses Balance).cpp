#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool state=true;
    string s;
    cin>>n;
    getchar();
    for(int i=0; i<n; i++)
    {
        stack<char> st;
        state=true;
        getline(cin,s);
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='(')
                st.push(s[j]);
            else if(s[j]=='[')
                st.push(s[j]);
            else if(s[j]==')')
            {
                if(st.empty()||st.top()!='(')
                {
                    state=false;
                    break;
                }
                else if(st.top()=='(')
                    st.pop();
            }
            else if(s[j]==']')
            {
                if(st.empty()||st.top()!='[')
                {
                    state=false;
                    break;
                }
                else if(st.top()=='[')
                    st.pop();
            }
        }
        if (state && st.empty())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
