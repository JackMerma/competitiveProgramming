#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n;cin>>n;
    int arr[n];
    int con[n]={0};
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            con[i]=1;
            con[i-1]=1;
        }
    }

    int ans=0;

    for(int i=0;i<n;i++) ans+=con[i];

    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

