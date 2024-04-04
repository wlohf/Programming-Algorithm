#include <bits/stdc++.h>
using namespace std;

#define int long long
int n, k, s, s1, x, y, z, g;
int check;
int a[100050][3];

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
            s += a[i][0] * a[i][1];
        }
    }
    for (int z = sqrt(s / k); z >= 1; z--) // 通过遍历所有可能正方形边长的值来找对最大的.但是这样时间复杂度会过高
    {                                      // 所以在99-2里面考虑用二分来进行查找,这样就可以降低时间复杂度了
        if (z * z * k > s)                 // z表示小正方形的边长
        {
            continue;
        }
        else
        {
            g = 0;
            for (int i = 0; i < n; i++)
            {
                x = 0;
                y = 0;
                x = a[i][0] / z;
                y = a[i][1] / z;
                g += x * y; // g代表当前边长下,能分出多少个相同大小的小巧克力
            }
            if (g >= k)
            {
                cout << z;
                break;
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}
