#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n;cin>>n;
    string str;
    cin>>str;

    set<string> dat;

    int ans=1;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]!=str[i+1])
            ans++;
    }
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

