#include <bits/stdc++.h>
using namespace std;
#define int long long
//迷宫
const int N = 5e3+10;

int m, n, sx, sy; // 变量定义：地图大小、起始坐标
char a[N][N]; // 地图
int vis[N][N]; // 访问标记
int d,f;//补充:判断是否可以到达某个点(d,f)?
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // 移动方向
int dfs(int x, int y){
    if(x==d and y==f){ // 若到达终点，返回成功
        return 1;
    }
    vis[x][y] = 1; // 标记当前点已访问
    for(int i = 0; i < 4; i++){
        int dx = x + dir[i][0];
        int dy = y + dir[i][1];
        //1  0
        //-1 0
        //0  1
        //0 -1
        // 边界和障碍物检查
        if(dx <= 0 || dx > n || dy <= 0 || dy > m || a[dx][dy] == '#' || vis[dx][dy]!=0) 
            continue;
        if(dfs(dx, dy)) 
            return 1; // 若找到终点，则提前返回
    }
    return 0; 
}

void solve(){
    cin >> n >> m; 
    cin >> d >> f;//目的点的坐标
    sx = 1; 
    sy = 1; 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j]; // 输入地图
            vis[i][j] = 0; // 初始化访问标记
        }
    }
    if(dfs(sx, sy)) cout << "Yes" << endl; // 从起始点开始搜索
    else cout << "No" << endl;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= m; j++){
    //         cout << vis[i][j] << " "; // 输出访问状态
    //     }
    //     cout << endl;
    // }
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
    

    return 0;
}