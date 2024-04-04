#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
int n,k;
int miny = INF;
int sum;
int temp = 0;
int ans1;
int ans2;
int check;
struct shou
{
    int x;
    int y;
}SHOU[N];

bool cmp(shou a,shou b){
    return a.x < b.x;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> k >> n;

    for (int i = 0; i < k; ++i)
    {
        cin >> SHOU[i].x >> SHOU[i].y;
        if(miny > SHOU[i].y and i<k-1)
            miny = SHOU[i].y;
            
    }
    // cout << miny<<endl;

    sort(SHOU,SHOU+k-1,cmp);
 
    for (int i = 0; i < k; ++i)
    {
        if(SHOU[i].x<miny and temp<=n){
            sum+=SHOU[i].x;
            temp++;
        }
        else if(n-temp>0){
            ans1=sum+(n-temp)*miny;
        }
    }
    temp = 0;
    sum=0;
    for (int i = 0; i < k; ++i)
    {
        sum+=SHOU[i].x;
    }
    // cout << sum<<endl;
    ans2=sum+(n-k)*SHOU[k-1].y;
    cout << ans1 << " " << ans2 << endl; 
    cout << min(ans1,ans2);

    return 0;
}