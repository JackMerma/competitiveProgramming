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
    /**
    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int k; cin>>k;
    int val=arr[k-1];
    sort(arr.begin(), arr.end());

    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<i+1<<endl;
            return;
        }
    }
    */
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int k; cin>>k;
    int value=arr[k-1];

    sort(arr, arr+n);

    for(int i=0;i<n;i++){
        if(arr[i]==value){
            cout<<i+1<<endl;
            return;
        }
    }
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

