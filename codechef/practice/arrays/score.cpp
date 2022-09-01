#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int arr[12]={0};
    int n;cin>>n;

    while(n--){
        int p, s;
        cin>>p>>s;
        arr[p]=max(arr[p], s);
    }

    int ans=0;
    for(int i=0;i<9;i++) ans+=arr[i];

    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--) solve();
	return 0;
}
