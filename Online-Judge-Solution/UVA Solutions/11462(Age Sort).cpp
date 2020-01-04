#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    long int n,a;
    while(scanf("%ld",&n)==1 && n!=0)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%ld",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            printf("%ld",v[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
        v.clear();
    }

    return 0;
}
