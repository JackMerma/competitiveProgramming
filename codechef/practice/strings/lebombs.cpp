#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n;cin>>n;
    string str; cin>>str;
    
    if(n<2){
        if(str[0]=='1') cout<<0<<endl;
        else cout<<1<<endl;
        return;
    }

    for(int i=1;i<n-1;i++){
        if(str[i]=='1'){
            int aux = i;
            str[i-1]='1';
            if(str[i+1]=='0')i++;
            str[aux+1]='1';
        }
    }

    if(str[0]=='1') str[1]='1';
    if(str[n-1]=='1') str[n-2]='1';

    int ans=0;

    for(int i=0;i<n;i++)
        if(str[i]=='0')
            ans++;
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

