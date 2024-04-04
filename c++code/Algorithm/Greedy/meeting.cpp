#include<bits/stdc++.h>
using namespace std;

#define int long long
int n;
int a[100100];
int b[100100];
void solve(){

}

signed main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
struct meeting
{
    int beg;
    int end;
}meet[1000];

bool cmp(meeting x,meeting y){
    if(x.end==y.end){
        return x.beg >y.beg; 
    }
    else{
        return x.end < y.end;
    }
}
sort(meet+1,meet+n,cmp);
    int solve(int n){

    
    int ans =1;
    int last = meet[0].end;
    for (int i = 0; i < n; i++)
    {
        if(meet[i].beg>=last){
            ans++;
            last = meet[i].end;
        }
    }
    return ans;
    }

return 0;
}
