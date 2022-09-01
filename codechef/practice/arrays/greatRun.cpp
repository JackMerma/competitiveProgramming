#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans=0;
    for(int i=0;i<n-k+1;i++){
        int sum=0;
        for(int j=i;j<i+k;j++)
            sum+=arr[j];
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;

    while(t--)
        solve();
    return 0;
}
