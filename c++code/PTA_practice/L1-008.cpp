#include <bits/stdc++.h>
using namespace std;
#define int long long
int a, b, sum;
signed main()
{
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        sum += i;
        cout << i;
        if(i%6==0){
            cout << endl;
        }
    }
    cout << endl;
    cout << "Sum = " << sum;

    return 0;
}