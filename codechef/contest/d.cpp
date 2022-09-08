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
    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int k; cin>>k;
    set<int> dele;
    for(int i=0;i<k;i++){
        int data; cin>>data;
        dele.insert(data);
    }

    for(int i=0;i<n; i++){
        if(dele.find(arr[i])==dele.end())
            cout<<arr[i]<<" ";
    }
    cout<<endl;
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

