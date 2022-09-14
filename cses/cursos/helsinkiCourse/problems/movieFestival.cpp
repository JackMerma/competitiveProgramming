#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define umap unordered_map
#define uset unordered_set
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

bool caso(pair<ll, ll> a, pair<ll, ll> b){
    if(a.second!=b.second)
        return a.second < b.second;
    return a.first < b.first;
}

void solve(){
    int n; cin>>n;
    vector<pair<ll, ll>> arr;

    for(int i=0;i<n;i++){
        ll a, b; cin>>a>>b;
        arr.push_back(pair<ll, ll>(a, b));
    }

    sort(arr.begin(), arr.end(), caso);

    int ans=0;
    ll last=0;

    for(auto p:arr){
        if(p.first>=last){
            ans++;
            last=p.second;
        }
    }
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

