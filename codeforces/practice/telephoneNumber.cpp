#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string str; cin>>str;

    if(n<11){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(str[i]=='8'){
            if(n-i>=11){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;

    while(t--)
        solve();
}
