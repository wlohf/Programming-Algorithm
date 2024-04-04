#include <bits/stdc++.h>
using namespace std;
//海盗装古董问题
#define int long long
int n;
int a[100100];
int b[100100];

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x = 0;
    int sum = 0;
    int w = 0;
    cin >> w;
    for (int i = 1; i <= 100100; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            n = i;
            break;
        }
    }
    sort(a + 1, a + n + 1,greater<int>());//尝试用了一下降序排序,sort默认是升序也就是从小到大,
         for (int i = 1; i <=n; i++)        //降序就是用greater<int>().
    {
        cout << a[i] <<" ";
    }    //排序是没有问题的
    
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += a[i];
    //     if (sum <= w)
    //     {
    //         x++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     cout << sum << " " << x-1 << endl;
    // }
    
    return 0;
}
