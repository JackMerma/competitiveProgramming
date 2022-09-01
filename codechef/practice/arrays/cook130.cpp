#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int ans=0;
    int con=0;

    for(int i=0;i<n;i++){
        if(arr[i]<8){
            con++;
        }
        ans++;
        if(con==7)
            break;
    }
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

