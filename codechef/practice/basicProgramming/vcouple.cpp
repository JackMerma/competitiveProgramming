#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define endl "\n"

void solve(){
    int n; cin>>n;

    int arr1[n];
    int arr2[n];

    for(int i=0;i<n;i++)
        cin>>arr1[i];

    for(int i=0;i<n;i++)
        cin>>arr2[i];

    int minh=arr1[0], maxh=arr1[0];
    int minm=arr2[0], maxm=arr2[0];

    for(int i=0;i<n;i++){
        minh=min(minh, arr1[i]);
        maxh=max(maxh, arr1[i]);
        minm=min(minm, arr2[i]);
        maxm=max(maxm, arr2[i]);
    }

    cout<<max(minh+maxm, maxh+minm)<<endl;
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

