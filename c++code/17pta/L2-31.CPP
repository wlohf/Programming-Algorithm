#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 1e5+10;
vector<string> a(N);//存放已关注的用户名
vector<string> b(1010); // 假设最多有1010个字符串
vector<int> c(1010);
vector<string> d; // 用于收集满足条件的字符串

signed main(){    
 // 使用vector动态管理大小
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
    sort(d.begin(), d.end()); // 对d进行排序
    for(const auto& s : d){
        cout << s << endl;
    }
    if(d.empty()){
        cout << "Bing Mei You" << endl;
    }
    return 0;
}
