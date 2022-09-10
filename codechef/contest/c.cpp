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
    set<pair<ll, ll>> s1;
    set<pair<ll, ll>> s2;

    for(int i=0;i<n;i++){
        ll dat; cin>>dat;
        s1.insert(pair<ll, ll>(dat, i));
    }

    for(int i=0;i<n;i++){
        ll dat; cin>>dat;
        s2.insert(pair<ll, ll>(dat, i));
    }

    vector<set<ll>> arr(n);

    auto itera=s1.end();
    auto iterb=s2.end();
    itera--;
    iterb--;

    for(int i=n-1;i>=0;i--){
        ll posa=itera->second;
        ll posb=iterb->second;

        if(posa==posb && i==n-1){
            cout<<1<<endl;
            return;
        }
        
        auto iterx=s1.begin();
        auto itery=s2.begin();

        for(int j=0;j<i;j++){
            arr[posa].insert(iterx->second);
            arr[posb].insert(itery->second);
            iterx++;
            itery++;
        }

        itera--;
        iterb--;
    }

    int maxNum=arr[0].size();
    int ans=1;

    for(int i=1;i<arr.size(); i++){
        if(arr[i].size()==maxNum){
            ans++;
        }else if(arr[i].size()>maxNum){
            ans=1;
            maxNum=arr[i].size();
        }
    }

    cout<<ans<<endl;
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

