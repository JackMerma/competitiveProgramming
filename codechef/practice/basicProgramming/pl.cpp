#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int a,b,a1,b1,a2,b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;

    if((a==a1&&b==b1)||(a==b1&&b==a1))
        cout<<1<<endl;
    else if((a==a2&&b==b2)||(a==b2&&b==a2))
        cout<<2<<endl;
    else
        cout<<0<<endl;

}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;

    while(t--)
        solve();
	return 0;
}


