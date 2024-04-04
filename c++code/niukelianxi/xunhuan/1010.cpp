#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[100100];
// 判断斐波那契数列的第n个数是多少,直接循环求解.
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n ;
    a[1]=1;
    a[2]=1;
    int x=0;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];

    }
        x=a[n];
    cout << x <<endl;
return 0;
}

