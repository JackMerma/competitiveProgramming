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
    ll k; cin>>k;
    ll b; cin>>b;
    ulli s; cin>>s;

    if(k*b>s){
        cout<<-1<<endl;
    }else{
        ulli sobra=(s<(k*(b+1)-1))?0:s-(k*(b+1)-1);
        if(!sobra){
            for(int i=0;i<n-1;i++)
                cout<<0<<" ";
            cout<<s<<endl;
        }else{
            ll cant=sobra/(k-1);
            if(cant>=n){
                cout<<-1<<endl;
            }else{
                sobra=(s<k*b)?0:s-k*b;
                ll newCant=sobra/(k-1);
                for(int i=0;i<n-1-newCant;i++)
                    cout<<0<<" ";
                for(int i=0;i<newCant;i++)
                    cout<<k-1<<" ";
                cout<<s-((k-1)*newCant)<<endl;
            }
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
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

    return 0;
}

