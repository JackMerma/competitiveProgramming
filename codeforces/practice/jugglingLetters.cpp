#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int arr[26]={0};

    for(int i=0;i<n;i++){
        string str; cin>>str;
        int len=str.length();
        for(int j=0;j<len;j++)
            arr[str[j]-'a']++;
    }

    for(int x:arr){
        if(x && x%n){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;

    while(t--)
        solve();
}
