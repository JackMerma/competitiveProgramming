#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define ulli unsigned long long int
#define umap unordered_map
#define uset unordered_set
#define pqueue priority_queue
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

bool order1(ll arr[], int n){
    for(int i=0;i<n-1;i++)
        if(arr[i]>arr[i+1])
            return 0;
    return 1;
}

bool order2(ll arr[], int n){
    for(int i=0;i<n-1;i++)
        if(arr[i]<arr[i+1])
            return 0;
    return 1;
}

void solve(){
    int n; cin>>n;
    ll arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<order1(arr, n)<<endl;
    cout<<order2(arr, n)<<endl;
    if(order1(arr, n)||order2(arr, n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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

