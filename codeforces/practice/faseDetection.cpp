#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin>>n>>m;
    vector<string> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(n==1 || m==1){
        cout<<0<<endl;
        return;
    }

    int ans=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            char a = arr[i-1][j-1];
            char b = arr[i-1][j];
            char c = arr[i][j-1];
            char d = arr[i][j];
            vector<char> le{a, b, c, d};
            string s{"face"};
            int total=0;
            for(int k=0;k<4;k++)
                if(s[k]==le[k])
                    total++;
            if(total==4)
                ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}
