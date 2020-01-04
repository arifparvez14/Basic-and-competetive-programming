#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase, i;
    double baseNum, signNum, powerNum;
    cin>>testCase;
    while(testCase--)
    {
        cin>>baseNum>>signNum>>powerNum;
        /*cout <<resetiosflags(ios_base::dec)<<setiosflags(ios_base::hex | ios_base::uppercase | ios_base::showbase) << int(baseNum)<<endl;
        cout<<setfill('_')<<setw(15)<<fixed << setprecision(2)<<setiosflags(ios::showpos)<<posNum<<endl;
        cout<<setiosflags(ios::scientific)<<fixed<<setprecision(9)<<powerNum;*/
        cout<<hex<<left<<showbase<<nouppercase<<(long long) baseNum<<endl;
        cout<<dec<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2)<<signNum<<endl;
        cout<<scientific<<uppercase<<noshowpos<<setprecision(9)<<powerNum<<endl;
        return 0;

    }
}
