#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    vector<int>:: iterator i;

    cout<<"Unsorted Version"<<endl;

    for(i=v.begin();i!=v.end();i++)
        printf("%d",*i);

    printf("\n");
    sort(v.begin(),v.end());

    cout<<"Sorted Version"<<endl;

    for(i=v.begin();i!=v.end();i++)
        printf("%d",*i);

    return 0;
}
