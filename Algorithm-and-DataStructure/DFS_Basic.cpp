#include <bits/stdc++.h>

#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;
typedef long long ll;

const int maxn = 102;

vector<int> g[maxn];
bool visited[maxn];

void dfs(int u)
{
    visited[u] = true;
    cerr<< u <<endl;
    for(int i = 0; i < (int)g[u].size(); i++)
    {
        int v = g[u][i];
        if(!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    fileread;
    int n, m;
    scanf("%d %d",&n,&m);
    for(int i = 0; i <=m ; i++)
    {
        int u, v;
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);
    return 0;
}


