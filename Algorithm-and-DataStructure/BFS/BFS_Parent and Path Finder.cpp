#include <bits/stdc++.h>

#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;
typedef long long ll;

const int maxn = 102;

vector<int> g[maxn];
bool visited[maxn];
int dis[maxn];
int parent[maxn];

void PathFinder(int u){
    if(parent[u] == -1){
        cout<<u<<" ";
        return;
    }
    PathFinder(parent[u]);
    cout<<u<<" ";
}

int main()
{
    fileread;
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0; i <= m; i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;
    dis[1] = 0;
    parent[1] = -1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0; i <(int)g[u].size(); i++){
            int v = g[u][i];
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                dis[v] = dis[u] + 1;
                parent[v] = u;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout<<i<<" "<<parent[i]<<endl;
    }

    PathFinder(7);
    return 0;
}

