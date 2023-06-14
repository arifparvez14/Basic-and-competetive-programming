#include <bits/stdc++.h>

#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define dbg(x) cerr << #x << ": " << x << endl
using namespace std;

const int maxn = 22;

char grid[maxn][maxn];
bool visited[maxn][maxn];
int n, m;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool check(int row, int col)
{
    return (0 <= row and row < n and 0 <= col and col <m and grid[row][col] == '.' and !visited[row][col]);
}

int main ()
{
    fileread;
    int t;
    cin>>t;

    //Taking 2D Grid input
    for(int cs = 1; cs <= t; cs++)
    {
        memset(visited,false,sizeof visited);
        cin>>m>>n;
        for(int i = 0; i < n; i++)
        {
            scanf("%s",grid[i]);
        }
        /*for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }*/

        //Find Prince Position
        int p_row, p_col;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == '@')
                {
                    p_row = i;
                    p_col = j;
                }
            }
        }

        //Find the Visited nodes
        queue<int> q;
        visited[p_row][p_col] = true;
        q.push(p_row);
        q.push(p_col);

        while(!q.empty())
        {
            int r = q.front();
            q.pop();
            int c = q.front();
            q.pop();

            for(int i = 0; i < 4; i++)
            {
                int newrow = r + dx[i];
                int newcol = c + dy[i];
                if(check(newrow,newcol))
                {
                    q.push(newrow);
                    q.push(newcol);
                    visited[newrow][newcol] = true;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j= 0; j <m; j++)
            {
                if(visited[i][j]) ans++;
            }
        }

        printf("Case %d: %d\n", cs, ans);
    }
    return 0;
}

