#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

const int N=200001;

void solve(){
    int n;cin>>n;
    int arr[N]={0};
    int maxCont=0;

    for(int i=0;i<n;i++){
        int val; cin>>val;
        arr[val-1]++;
        maxCont=max(arr[val-1], maxCont);
    }

    if(n==1){
        cout<<0<<endl;
    }else{
        if(maxCont<2) cout<<-1<<endl;
        else if(maxCont==n) cout<<0<<endl;
        else cout<<n-(maxCont-1)<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

    return 0;
}

