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

int N=(int)1e9+1;

void solve(){
    int n, q; cin>>n>>q;
    vector<vector<pair<ll, bool>>> arr(N);

    for(int i=0;i<n;i++){
        ll a, b, k;
        cin>>a>>b>>k;
        arr[a].push_back(pair<ll, bool>(k, 1));
        arr[b].push_back(pair<ll, bool>(k, 0));
    }

    for(int i=0;i<q;i++){
        ll a, b; cin>>a>>b;
        ll ans=0;
        for(int j=a; j<b;j++){
            for(auto dat: arr[i]){
                if(dat.second)
                    ans+=dat.first;
                else
                    ans-=dat.first;
            }
        }
        cout<<ans<<endl;
    }
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

