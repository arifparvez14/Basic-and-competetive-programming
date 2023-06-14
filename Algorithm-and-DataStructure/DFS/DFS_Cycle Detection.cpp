#include <bits/stdc++.h>

#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;
typedef long long ll;

const int maxn = 102;
bool visited[maxn];
bool cycle;
vector <int> g[maxn];

void dfs(int u, int p)
{
    visited[u] = true;
    for(int i = 0; i < (int)g[u].size(); i++)
    {
        int v = g[u][i];
        if(v != p)
        {
            if (!visited[v])
            {
                dfs(v, u);
            }
            else cycle = true;
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
    if(cycle) cout<<"Cycle";
    else cout<<"Not Cycle";
    return 0;
}


