#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    string name; cin>>name;
    int n=name.length();
    vector<int> dat(n);

    for(int i=0;i<n;i++)
        dat[i]=name[i]-'a'+1;

    sort(dat.begin(),dat.end());

    int ans=0;
    for(int i=0;i<n;i++)
        ans+=dat[i]*(i+1);
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

