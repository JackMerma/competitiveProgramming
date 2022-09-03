#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define endl "\n"

int VAL = 1002;

void solve(){
    int n; cin>>n;
    int arr[VAL]={0};

    for(int i=0;i<n;i++){
        int dato; cin>>dato;
        arr[dato]++;
    }
    int domi=0;
    for(int i=0;i<VAL;i++){
        domi=max(domi, arr[i]);
    }

    int count=0;
    for(int i=0;i<VAL;i++){
        if(count>1){
            cout<<"NO"<<endl;
            return;
        }

        if(arr[i]==domi)
            count++;
    }
    cout<<"YES"<<endl;

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

