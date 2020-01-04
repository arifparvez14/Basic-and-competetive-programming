#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next, c;
    while(cin>>n)
    {

        for ( c = 0 ; c < n ; c++ )
        {
            if ( c <= 1 )
                next = c;
            else
            {
                next = first + second;
                first = second;
                second = next;
            }
            printf("%d",next);
                if(c<(n-1))
                    cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
