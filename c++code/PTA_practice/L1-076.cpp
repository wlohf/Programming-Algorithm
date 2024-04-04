#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
float a[100100];
signed main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <  m)
        {
            printf("On Sale! %.1f\n",a[i]);
        }
    }
    return 0;
}