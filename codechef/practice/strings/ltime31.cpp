#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    string str;
    cin>>str;
    int n=str.length();
    
    set<string> dat;
    for(int i=0;i<n-1;i++)
        dat.insert(str.substr(i,2));
    
    cout<<dat.size()<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

