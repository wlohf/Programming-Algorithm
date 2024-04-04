#include<bits/stdc++.h>
using namespace std;
//根据坐标判断是否为正方形,核心思想是判断2点直接的坐标距离,这有2个答案,一种是对角线,一种是边长.然后再分别判断它们的倍数关系
#define int long long   //在这里用到了动态数组vector,可以参考定义以及它push_back在末尾插入的用法
vector<int> v;
void solve(int a[], int b[]){
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            v.push_back((a[i]-a[j])*(a[i]-a[j]) + (b[i]-b[j])*(b[i]-b[j]));
        }
    }
}

signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a[4], b[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < 4; j++) {
        cin >> b[j];
    }

    solve(a, b);
    
    int n = v.size();
    int min = LLONG_MAX;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if(min > v[i]){
            min = v[i];
        }
        if(max < v[i]){
            max = v[i];
        }
    }
    if(max == 2 * min){
        cout << "It's a square";
    }
    else{
        cout << "Not a square";
    }

    return 0;
}
