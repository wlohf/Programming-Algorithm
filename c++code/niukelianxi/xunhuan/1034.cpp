#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[100100];
int b[100100];
// n个摊位,第i个摊位有ai个糖果,选择任意堆,只要总数是偶数就可以全部拿走.
// 这题的思想是判断有多少堆奇数的糖果,如果有偶数堆,就全部加起来,
// 如果是奇数堆,则把所有奇数堆从小到大排序,然后排除第一个,把后面的全加起来即可.2020-3-4
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int j = 1;
    int x = 0;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 != 0)
        {
            b[j] = a[i];
            j++;
            x++;
        }
        else
        {
            sum += a[i];
        }
    }
    sort(b + 1, b + x + 1);

    if (x % 2 == 0)
    {
        for (int j = 1; j <= x; j++)
        {
            sum += b[j];
        }
    }
    else
    {
        for (int j = 1; j <= x; j++)
        {
            sum += b[j + 1];
        }
    }
cout << sum;
    return 0;
}


