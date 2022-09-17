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

void solve(){
    int n; cin>>n;
    string str; cin>>str;
    int len=str.length();

    if(len==1){
        cout<<0<<endl;
        return;
    }

    ll ans=0;
    for(int i=0;i<len;i++) ans+=(str[i]=='L')?i:len-i-1;
    pqueue<ll> dat;

    for(int i=0;i<len/2;i++)
        if(str[i]=='L')
            dat.push(len-i-1-i);

    for(int i=len/2+len%2;i<len;i++)
        if(str[i]=='R')
            dat.push(i-(len-i-1));

    int res=len-dat.size();

    while(!dat.empty()){
        cout<<ans+dat.top()<<" ";
        ans+=dat.top();
        dat.pop();
    }

    for(int i=0;i<res;i++)
        cout<<ans<<" ";
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

