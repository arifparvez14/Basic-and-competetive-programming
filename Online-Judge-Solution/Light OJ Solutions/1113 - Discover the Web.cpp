#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase,c=0;
    cin>>testCase;
    while(testCase--)
    {
        stack <string>f,b;
        string s,vt="VISIT",ba="BACK",fw="FORWARD",qt="QUIT",url="http://www.lightoj.com/";
        b.push(url);
        printf("Case %d:\n",++c);
        while(1)
        {
            cin>>s;
            if(s==vt)
            {
                cin>>url;
                cout<<url<<endl;
                b.push(url);
                if(!f.empty())
                {
                    while(!f.empty())
                        f.pop();
                }
            }
            else if(s==ba)
            {
                f.push(b.top());
                b.pop();
                if(!b.empty())
                {
                    cout<<b.top()<<endl;
                }
                else
                {
                    cout<<"Ignored"<<endl;
                    b.push(f.top());
                    f.pop();
                }
            }
            else if(s==fw)
            {
                if(!f.empty())
                {
                    cout<<f.top()<<endl;
                    b.push(f.top());
                    f.pop();
                }
                else
                {
                    cout<<"Ignored"<<endl;
                }
            }
            else if(s==qt)
            {
                break;
            }

        }
    }
    return 0;

}
