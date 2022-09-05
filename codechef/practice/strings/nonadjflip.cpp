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
    string str; cin>>str;

    bool allOnes=1;
    for(int i=0;i<n;i++){
        if(str[i]=='1')
            allOnes=0;
    }

    if(allOnes){
        cout<<0<<endl;
    }else{
        for(int i=0;i<n-1;i++){
            if(str[i]=='1'&&str[i+1]=='1'){
                cout<<2<<endl;
                return;
            }
        }
        cout<<1<<endl;
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

