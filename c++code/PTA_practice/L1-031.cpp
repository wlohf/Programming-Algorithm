#include <bits/stdc++.h>
using namespace std;
int n;
int a[40][4];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (abs((a[i][1] / 2.0) - (a[i][0] - 100) * 0.9) < (a[i][0] - 100) * 0.9 * 0.1)//注意还是要变成浮点型,整数型有误差
        {
            cout << "You are wan mei!" << endl;
        }
        else if ((a[i][1] / 2.0) - ((a[i][0] - 100) * 0.9) >= (a[i][0] - 100) * 0.9 * 0.1)
        {
            cout << "You are tai pang le!" << endl;
        }
        else
        {
            cout << "You are tai shou le!" << endl;
        }
    }
    
    // double y1=(a[0][1] / 2.0) - ((a[0][0] - 100) * 0.9);
    // double y2=(a[0][0] - 100) * 0.9 * 0.1;
    // cout << y1 << " "<<y2;
    return 0;
}