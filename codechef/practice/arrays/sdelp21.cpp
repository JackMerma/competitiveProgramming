#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n, k; cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int a=arr[0];
    int b=arr[0];

    for(int i=0;i<n;i++){
        a=min(a,arr[i]);
        b=max(b,arr[i]);
    }

    if(a+b<=k||n==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

