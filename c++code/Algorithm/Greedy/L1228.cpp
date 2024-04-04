#include<bits/stdc++.h>
using namespace std;
#define int long long 
int N =1e5+10;
int n;
int sum;
int x;
signed main(){
    cin >> n;
    int a[N];
    int bg = n-1;
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    while (bg--)
    {
        if(x==bg){
            break;
        }
        for(int i= x;i<n;i++){
            sum+=a[i];
        }
        x++;
    }
    cout << sum;

    return 0;
}
