#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

int N = 1000000001;

void solve(){
    int n; cin>>n;
    map<ll, int> m;

    for(int i=0;i<n;i++){
        ll dato; cin>>dato;
        m[dato]++;
    }

    ll ans=0;
    for(auto iter=m.begin(); iter!=m.end(); iter++){
        ll c = iter->second;
        ans+=(c*(c-1))/2;
    }
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t; cin>>t;

    while(t--) 
        solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

