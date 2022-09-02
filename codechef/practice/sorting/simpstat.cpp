#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n, k;
    cin>>n>>k;

    vector<int> dat;

    for(int i=0;i<n;i++){
        int dato; cin>>dato;
        dat.push_back(dato);
    }

    sort(dat.begin(),dat.end());

    double ans=0;

    for(int i=k; i<n-k;i++)
        ans+=dat[i];

    ans=ans/(n-2*k);
    cout<<fixed<<setprecision(6)<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t; cin>>t;
    while(t--) solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total:"<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

