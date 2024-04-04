#include<bits/stdc++.h>
using namespace std;

#define int long long 
int n,m;
int a[1010][3]; //存储考生信息
int b[1001]; //存储查询的数值

signed main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<3;j++){
            cin >> a[i][j];
        }
    }
    cin >> m;
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i]==a[j][1]){
                cout << a[j][0] <<" "<< a[j][2] << endl;
            }
        }
        
    }
return 0;
}
