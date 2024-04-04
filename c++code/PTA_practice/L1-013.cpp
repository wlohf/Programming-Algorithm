#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, sum = 0;
int a[11]; // 存储每个数阶层后的值,如3!=6...

int f(int x) {
    if (x <= 1) {
        return 1;
    } else {
        int result = 1; 
        for (int i = 2; i <= x; i++) {
            result *= i;
        }
        return result;
    }
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a[i] = f(i);
        sum += a[i];
    }
    cout << sum;

    return 0;
}
