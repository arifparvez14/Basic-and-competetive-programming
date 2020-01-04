#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<string> oprt, oprnd;
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                continue;
            else if(s[i]>='a' and s[i]<='z')
            {
                string x;
                x += s[i];
                oprt.push(x);
            }
            else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='^')
            {
                string x;
                x += s[i];
                oprnd.push(x);
            }

            else if (s[i]==')')
            {
                string x,y,z;
                x=oprt.top();
                oprt.pop();

                y=oprt.top();
                oprt.pop();
                y +=x;

                z=oprnd.top();
                oprnd.pop();
                y +=z;
                oprt.push(y);
            }
        }
        cout<<oprt.top()<<endl;
    }
    return 0;
}
