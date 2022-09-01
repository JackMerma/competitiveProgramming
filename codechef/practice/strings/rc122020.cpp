#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    string str;
    cin>>str;
    int n=str.length();

    if(str.length()<3){
        cout<<"YES"<<endl;
    }else{
        string a=str.substr(1,n-1)+str[0];
        string b=str[n-1]+str.substr(0,n-1);
        if(a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

    return 0;
}

