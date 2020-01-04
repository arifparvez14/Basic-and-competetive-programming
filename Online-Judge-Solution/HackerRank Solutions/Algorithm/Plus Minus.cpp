#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    float x;
    vector<int>p,m,z;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>0) p.push_back(x);
        else if(x<0) m.push_back(x);
        else z.push_back(x);
    }
    printf("%0.6f\n",p.size()/(float)n);
     printf("%0.6f\n",m.size()/(float)n);
      printf("%0.6f\n",z.size()/(float)n);
    return 0;
}
