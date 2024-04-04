#include<bits/stdc++.h>
using namespace std;
//
int n, tot = 0; // n 表示皇后的数量, tot 用来统计解的数量
int col[12] = {0}; // col 数组用来记录每一行皇后所在的列

// 检查当前行的皇后放在c列是否可行
bool check(int c, int r) {
    for(int i = 0; i < r; i++) // 检查所有之前的行
        if(col[i] == c || (abs(col[i]-c) == abs(i -r))) // 判断同列或对角线上是否已经放置了皇后
            return false;
    return true; // 通过所有检查，说明当前位置可行
}

// 递归函数，尝试在每一行放置皇后
void DFS(int r) {
    if(r == n) { // 如果已经成功放置了n个皇后，则记录解的数量并返回
       tot++;
       return;
    }
    for(int c = 0; c < n; c++) { // 尝试在当前行的每一列放置皇后
        if(check(c, r)) { // 检查是否可以在此放置皇后
            col[r] = c; // 在第r行的第c列放置皇后
            DFS(r+1); // 递归尝试放置下一个皇后
            // 注意：这里没有必要撤销col[r]的设置，因为下一次循环会覆盖它
        }
    }
}

int main() {
    int ans[12] = {0}; // 存储每个n对应的解的数量
    for(n = 0; n <= 10; n++) { // 对于每个n（皇后数），计算解的数量
        memset(col, 0, sizeof(col)); // 清零col数组，为新的n值准备
        tot = 0; // 解的数量重置为0
        DFS(0); // 开始深度优先搜索
        ans[n] = tot; // 记录解的数量
    }
    while(cin >> n) { // 读入n的值
        if(n == 0)
           return 0; // 如果n为0，则退出
        cout << ans[n] << endl; // 输出该n下的解的数量
    }
    return 0;
}
