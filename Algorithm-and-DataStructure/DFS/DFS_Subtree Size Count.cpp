#include <bits/stdc++.h>

#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;
typedef long long ll;

const int maxn = 102;
vector <int> g[maxn];
int subsize[maxn];

void dfs(int u, int p)
{
    subsize[u] = 1;
    for(int i = 0; i < (int)g[u].size(); i++)
    {
        int v = g[u][i];
        if(v != p)
        {
            dfs(v, u);
            subsize[u] += subsize[v];
        }
    }
}

int main()
{
    fileread;
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        int u, v;
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++){
        cerr<<"Subtree size of " << i <<" is: "<<subsize[i]<<endl;
    }
    return 0;
}



