#include <bits/stdc++.h>

#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;
typedef long long ll;

const int maxn = 102;
int c = 0;

char grid[7][7];
bool visited[7][7];

int dr[] = {0, 0, 1, -1};
int dc[] = {-1, 1, 0, 0};

void dfs(int row, int col){
    visited[row][col] = true;
    grid[row][col] = '@';
    for(int i = 0; i < 4; i++){
        int nrow = row + dr[i];
        int ncol = col + dc[i];
        if(nrow >= 0 and nrow < 5 and ncol >= 0 and ncol < 5 and grid[nrow][ncol] == '.'){
            c++;
            dfs(nrow, ncol);
        }
    }
}

int main()
{
    fileread;
    for(int i = 0; i < 5; i++){
        scanf("%s",grid[i]);
    }
    for(int i = 0; i < 5; i++){
        puts(grid[i]);
    }
    int srow, scol;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(grid[i][j] == '#'){
                srow = i;
                scol = j;
            }
        }
    }
    dfs(srow,scol);
    cout<<c;
    for(int i = 0; i < 5; i++){
        puts(grid[i]);
    }
    return 0;
}

