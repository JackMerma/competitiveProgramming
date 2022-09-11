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

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll n; cin>>n;

    while(n!=1){
        cout<<n<<" ";
        n=(n%2)?(n*3)+1:n/2;
    }
    cout<<1<<endl;

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

