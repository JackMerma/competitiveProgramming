#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    char a,b,c;
    cin>>a>>b>>c;
    char oa,ob;
    cin>>oa>>ob;

    if(a==oa||a==ob) cout<<a<<endl;
    else if(b==oa||b==ob) cout<<b<<endl;
    else cout<<c<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

