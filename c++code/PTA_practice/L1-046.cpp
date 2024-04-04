#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, y, k, sum, minx = 1000;
string a[10010][2];

signed main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += stoi(a[i][1]);
    }

    y = sum / (2 * n);
    
    for (int i = 0; i < n; i++) {
        if (abs(stoi(a[i][1]) - y) < minx) {
            minx = abs(stoi(a[i][1]) - y);
            k = i;
        }
    }

    cout << y << " " << a[k][0];

    return 0;
}
