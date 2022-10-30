#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
int dp[1001][1001];

int transform(int a0, int a1, int b0, int b1, string str1, string str2){
    if(!(a1+1) && !(b1+1)) return 0; // final
    if(!(a1+1)) return b1 - b0 + 1;
    if(!(b1+1)) return a1 - a0 + 1;

    if(dp[a1][b1]){
        return dp[a1][b1];
    }

    int total = INT_MAX;

    if(str1[a1] != str2[b1]){
        int costA = 1 + min(total, transform(a0, a1-1, b0, b1, str1, str2));
        int costB = 1 + min(total, transform(a0, a1, b0, b1-1, str1, str2));
        int costC = 1 + min(total, transform(a0, a1-1, b0, b1-1, str1, str2));
        total = min(min(costA, costB), costC);
    }else{
        total = min(total, transform(a0, a1-1, b0, b1-1, str1, str2));
    }

    return dp[a1][b1] = total;
}

void transform2(string str1, string str2, int n){
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=n;j++){
            int a = 1 + dp[i+1][j];
            int b = 1 + dp[i][j-1];
            int c = dp[i+1][j-1] + ((str1[i]!=str1[j-1])? 1:0);
            dp[i][j] = min(min(a, b), c);
        }
    }
}

void solve(){
    string str; cin>>str;
    int n = str.length();

    if(n == 1){
        cout<<0<<endl;
        return;
    }

    for(int i=0;i<n+1;i++)
        dp[n-i][0] = dp[n][i] = i;

    for(int i=0;i<n;i++)
        for(int j=1;j<n;j++)
            dp[i][j] = 0;

    string str2 = str;
    reverse(str2.begin(), str2.end());

    transform2(str, str2, n);
    //transform(0, n/2, 0, n/2, str, str2);
    cout<<dp[0][n]/2<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;

    while(t--)
        solve();

    return 0;
}
