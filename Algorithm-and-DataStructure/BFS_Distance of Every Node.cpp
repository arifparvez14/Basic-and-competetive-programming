#include <bits/stdc++.h>

#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;

const int maxn = 102;

vector<int> g[maxn];
int dis[maxn];
bool visited[maxn];

int main ()
{
    fileread;
    int node, edge;
    cin>>node>>edge;

    //Input graph
    for(int i = 0; i < edge; i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    //Print the associated nodes of every node
    /*for (int i = 1; i <= node; i++){
        cout<< i << ":";
        for(int j = 0; j < (int)g[i].size(); j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }*/

    //Count distance
    queue<int> q;
    q.push(1);
    visited[1] = true;
    dis[1] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0; i < (int)g[u].size(); i++){
            int v = g[u][i];
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                dis[v] = dis[u] + 1;
            }
        }
    }

    //Print distance from 1
    for(int i = 1; i <= node; i++){
        cout<<i<<": "<<dis[i]<<endl;
    }
    return 0;
}


