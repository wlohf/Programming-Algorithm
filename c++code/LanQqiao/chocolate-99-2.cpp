#include <bits/stdc++.h> //这是巧克力的优化算法,用的是二分来查找边长.
using namespace std;
#define int long long
int n, k;
int a[100050][2];
// 检查当前边长z是否可行
bool check(int z)
{
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        g += (a[i][0] / z) * (a[i][1] / z); // 累加每块巧克力切出的正方形数
        if (g >= k)
            return true; // 如果已经足够，则返回true,是不是return以后就不会进入循环?直接跳出循环?是的
    }                   //无论函数里面有多少个for循环,return直接全部跳出,但是break只能跳出最近的一个循环.
    return false; // 否则返回false
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n >> k;
    int maxSide = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        maxSide = max(maxSide, min(a[i][0], a[i][1])); // 找出最大可能的单边长
    }

    int low = 1, high = maxSide, ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(mid))
        {              // 如果当前边长可以，尝试更大的边长
            ans = mid; // 更新答案
            low = mid + 1;
        }
        else
        { // 否则尝试更小的边长
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}