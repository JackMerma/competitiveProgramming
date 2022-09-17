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

vector<string> arr;

void get(int n, int total, string str, int dat[]){
    if(total==n){
        arr.push_back(str);
        return;
    }

    for(int i=0;i<n;i++){
        if(dat[i]){
            dat[i]=0;
            get(n, total+1, str+to_string(i+1), dat);
            dat[i]=1;
        }
    }
}

void solve(){
    int n; cin>>n;
    ll k; cin>>k;

    int dat[9]={1,1,1,1,1,1,1,1,1};
    get(n, 0, "", dat);
    cout<<arr[k-1]<<endl;
    arr.clear();
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

