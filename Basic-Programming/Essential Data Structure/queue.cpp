#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>s;
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(10);

    while(!s.empty())
    {
        printf("%d",s.front());
        s.pop();
    }
    printf("\n");
    return 0;
}

