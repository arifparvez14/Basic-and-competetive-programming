#include<bits/stdc++.h>
using namespace std;
void stackOperation(stack<int>&s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main()
{
    stack<int>Stack;
    Stack.push(10);
    Stack.push(20);
    Stack.push(30);
    Stack.push(40);
    stackOperation(Stack);

    Stack.pop();
    stackOperation(Stack);
    return 0;
}
