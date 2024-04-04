#include <bits/stdc++.h>
using namespace std;
//斐波那契数列的求解
#define int long long
int n;
int a[100100];
int b[100100];
int sum;
int fab(int x)//当函数传来的是形参时,函数内部的所有变量都要用形参来替代,不能直接用n.
{
    if (x <= 1)
    {
        return x;
    }

    else
    {
        return fab(x - 1) + fab(x - 2);
    }
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum+=fab(i);
    }
    
    cout << fab(n) << " "<< sum;
    return 0;
}

//1 1 2 3 5 8
