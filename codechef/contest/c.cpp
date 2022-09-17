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
#define umap unordered_map
#define uset unordered_set

void solve(){
    int n; cin>>n;
    int arr[46];
    arr[0]=1;
    arr[1]=2;

    for(int i=2;i<46;i++)
        arr[i]=arr[i-1]+arr[i-2];
    
    cout<<arr[n-1]<<endl;
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

