#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n; cin>>n;
    int x; cin>>x;

    string str; cin>>str;

    int arr[1000500]={0};
    x=abs(x);
    int ini=x+150;
    arr[ini]++;

    for(int i=0;i<n;i++){
        if(str[i]=='R'){
            ini++;
            arr[ini]++;
        }else{
            ini--;
            arr[ini]++;
        }
    }

    int ans=0;
    for(int i=0;i<1000500;i++)
        ans+=(arr[i]!=0)?1:0;

    cout<<ans<<endl;

}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

