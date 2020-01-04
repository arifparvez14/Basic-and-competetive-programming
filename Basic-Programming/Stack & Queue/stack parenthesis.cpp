#include<bits/stdc++.h>
using namespace std;
int is_balanced(string k)
{
    string stack;
    //char stack[100],
    char last_char;
    int top,i,len;
    top=0,len=k.size();

    for(i=0; i<len; i++)
    {
        if(k[i]=='(')
        {
            stack[top]='(';
            top++;
        }
        else if(k[i]==')')
        {
            if(top==0)
                return 0;

        top--;
        last_char = stack[top];
        if(last_char !='(')
            return 0;
        }
    }
    if(top==0)
        return 1;
    else
        return 0;
}
int main()
{
    //char input[100];
    //scanf("%s",input);
    string s;
    cin>>s;
    if(is_balanced(s))
        cout<<"String is balanced";
    else
        cout<<"String is not balanced";
            return 0;
}

