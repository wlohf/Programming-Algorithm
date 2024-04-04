#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 1e5+10;
//悄悄关注,2017年天梯大区赛L2-3,能跑出第一个案例,但是最后一个会超时.
vector<string> a(N);
vector<string> b(1010); // 存储点赞的用户
vector<int> c(1010);    //每个用户的点赞次数
vector<string> d; // 用于收集满足条件的字符串
//链接 : https://pintia.cn/problem-sets/1091248832919158784/exam/problems/1091248927760760834?type=7&page=0
signed main(){    
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int sum = 0, m, n;
    float aversum;
    cin >> n ;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> b[i] >> c[i];
        sum += c[i];
    }
    aversum = 1.0 * sum / m;
    for(int i = 0; i < m; i++){
        if(c[i] > aversum){
            bool found = false;
            for(int j = 0; j < n; j++){
                if(b[i] == a[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                d.push_back(b[i]);
            }
        }
    }
    // sort(d.begin(), d.end()); // 对d进行排序
    for(const auto& s : d){
        cout << s << endl;
    }
    if(d.empty()){
        cout << "Bing Mei You" << endl;
    }
    return 0;
}
