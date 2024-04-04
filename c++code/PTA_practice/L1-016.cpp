#include<bits/stdc++.h>
using namespace std;

#define int long long

int n,z,sum,check,m,y;
string s="10x98765432";
string a[101];
int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//前17个数字的权重比
signed main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for(int i = 0;i <n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        sum=0;
        for(int j = 0; j<17;j++){
            if((a[i][j]-'0')>=32&&(a[i][j]-'0')<=41){ /判断是否为一个数字
                sum+=(a[i][j]-'0')*0.01*b[j];
            }
            else{
                break;
            }
            
        }
        z=sum%11;
        m=s[z];//校验码的值
    if(m==a[i][17]){
        cout << a[i];
        check++;
    }

    }


    
return 0;
}
