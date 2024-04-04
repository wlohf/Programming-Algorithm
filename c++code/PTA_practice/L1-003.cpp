#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,g;
string s;
int a[10];
signed main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> s;
    g=s.size();
    for(int i = 0;i<g;i++){
        a[s[i]-'0']++;
    }
    for(int i= 0;i<10;i++){
        if(a[i]!=0){
            cout << i <<":" << a[i] <<endl;
        }
    }
return 0;
}
