#include<bits/stdc++.h>
using namespace std;

#define int long long
int n,y;
char x;
char a[30][30];
int b[100100];
void solve(){

}

signed main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> x;
    y=(n+1)/2;

    for(int i = 0;i<y;i++){
        for(int j = 0;j <n;j++){
            a[i][j]=x;
        }
    }

    for (int i = 0; i < y; i++)
    {
        for(int j = 0;j<n;j++){
            cout << a[i][j];
        }
        cout << endl;
        
    }
    
return 0;
}
