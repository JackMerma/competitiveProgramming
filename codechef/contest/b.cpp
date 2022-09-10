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
    int n; cin>>n;
    ll maxVal, minVal;
    cin>>maxVal;

    minVal=maxVal;

    for(int i=0;i<n-1;i++){
        ll dato; cin>>dato;
        maxVal=max(dato, maxVal);
        minVal=min(dato, minVal);
    }

    ll a=max(maxVal*maxVal, max(minVal*minVal, maxVal*minVal));
    ll b=min(maxVal*maxVal, min(minVal*minVal, maxVal*minVal));

    cout<<b<<" "<<a<<endl;
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

