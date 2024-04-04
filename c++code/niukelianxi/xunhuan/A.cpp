#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m,check1,check2;
char a[105][55];
int b[105][2];
void solve()
{
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    string zifuchuan1 = "DFS";
    string zifuchuan2 = "dfs";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (check1 < zifuchuan1.length() && a[i][j] == zifuchuan1[check1])
            {
                check1++;
            }
            if (a[i][j] == zifuchuan2[check2])
            {
                check2++;
            }
        }
        b[i][0] = (check1 == zifuchuan1.length()) ? 1 : 0;
        b[i][1] = (check2 == zifuchuan2.length()) ? 1 : 0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout <<b[i][0] << b[i][1] << endl;
        }
    }


    return 0;
}
