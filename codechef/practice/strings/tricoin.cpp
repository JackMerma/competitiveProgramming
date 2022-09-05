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

void solve(){
    ll n; cin>>n;

    ll i=1, d=n, middle=(i+d)/2;

    while(i+1<d){
        middle=(i+d)/2;
        ll ans=(middle)*(middle+1)/2;
        if(ans>=n){
            d=middle;
        }else{
            i=middle;
        }
        if(ans==n){
            cout<<middle<<endl;
            return;
        }
    }
    cout<<i<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t; cin>>t;

    while(t--) 
        solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total:"<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

