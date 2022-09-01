#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n;cin>>n;
    if(n<300)
        cout<<3000<<endl;
    else
        cout<<n*10<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;

    while(t--)
        solve();
	return 0;
}
