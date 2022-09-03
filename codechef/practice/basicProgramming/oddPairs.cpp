#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    ll n;cin>>n;
    ll ans=2*(n/2)*(n/2+(n&1));

    //for(int i=1;i<=n;i++)
    //    ans+=2*((i%2|n%2)?(n+1-i)/2:(n-i)/2);
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    //2
    //1-2
    //
    //3
    //1-2
    //2-3
    //
    //4
    //1-2 1-4
    //2-3
    //3-4
    //
    //5
    //1-2 1-4
    //2-3 2-5
    //3-4
    //4-5

    int t;
    cin>>t;

    while(t--)
        solve();
	return 0;
}


