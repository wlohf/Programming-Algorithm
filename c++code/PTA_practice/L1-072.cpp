#include <bits/stdc++.h>
using namespace std;
// #define int long long
int a[5][5];
int b[3][2];
int x, y=0, sum,m,n;
int check[13];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= 3; i++)//在a数组里面找到哪个位置为0
    {
        for (int j = 1; j <= 3; j++)
        {
            if(a[i][j]==0){
                m=i;
                n=j;
            }
            
        }
    }
    for(int k=1;k<=9;k++){//找到1-9哪个数未出现,然后标记出来,进行替换
        
          for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if(k==a[i][j]){
                check[k]=1; //出现的都标为1,未出现则为0
            break;
            }
        }
    }
 
    }
    for(int k=1;k<=9;k++){//判断哪个数未出现,然后进行赋值.
        if(check[k]==0){
            a[m][n]=k;
        }
    }
    
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cin >> b[i][j];
        }
    }
    int y1 = a[b[1][1]][b[1][2]];
    int y2 = a[b[2][1]][b[2][2]];
    int y3 = a[b[3][1]][b[3][2]];
    cin >> x;
    switch (x)
    {
    case 1:
        for (int j = 1; j <= 3; j++)
        {
            y += a[1][j];
        }
        break;
    case 2:
        for (int j = 1; j <= 3; j++)
        {
            y += a[2][j];
        }
        break;
    case 3:
        for (int j = 1; j <= 3; j++)
        {
            y += a[3][j];
        }
        break;

    case 4:
        for (int i = 1; i <= 3; i++)
        {
            y += a[i][1];
        }
        break;
    case 5:
        for (int i = 1; i <= 3; i++)
        {
            y += a[i][2];
        }
        break;
    case 6:
        for (int i = 1; i <= 3; i++)
        {
            y += a[i][3];
        }
        break;

    case 7:
            y = a[1][1] + a[2][2] + a[3][3];
        break;
    case 8:
            y = a[1][3] + a[2][2] + a[3][1];
        break;
    }

    cout << y1 << endl;
    cout << y2 << endl;
    cout << y3 << endl;
    //cout << y;
    switch (y)
    {
    case 6:
        sum = 10000;
        break;
    case 7:
        sum = 36;
        break;
    case 8:
        sum = 720;
        break;
    case 9:
        sum = 360;
        break;
    case 10:
        sum = 80;
        break;
    case 11:
        sum = 252;
        break;
    case 12:
        sum = 108;
        break;
    case 13:
        sum = 72;
        break;
    case 14:
        sum = 54;
        break;
    case 15:
        sum = 180;
        break;
    case 16:
        sum = 72;
        break;
    case 17:
        sum = 180;
        break;
    case 18:
        sum = 119;
        break;
    case 19:
        sum = 36;
        break;

    case 20:
        sum = 306;
        break;
    case 21:
        sum = 1080;
        break;
    case 22:
        sum = 144;
        break;
    case 23:
        sum = 1800;
        break;
    case 24:
        sum = 3600;
        break;
    default:
        break;
    }
    cout << sum;
    return 0;
}