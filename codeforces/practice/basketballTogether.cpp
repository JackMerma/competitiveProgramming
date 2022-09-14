#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define umap unordered_map
#define uset unordered_set
#define pqueue priority_queue
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

void solve(){
    int n; cin>>n;
    ll d; cin>>d;

    vector<ll> arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr.begin(), arr.end());

    int ans=0;
    int noSele=n;
    int last=n-1;

    while(noSele>0&&last>=0){
        ll cost=(int)(d/arr[last])+1;

        if(cost>noSele)
            break;

        noSele-=cost;
        ans++;
        last--;
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

