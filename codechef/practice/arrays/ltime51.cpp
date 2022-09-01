#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int pre[26];
    for(int i=0;i<26;i++) cin>>pre[i];

    string str; cin>>str;

    int miss[26]={0};
    for(int i=0;i<str.length();i++)
        miss[str[i]-'a']++;
    
    int ans=0;

    for(int i=0;i<26;i++) ans+=(!miss[i])?pre[i]:0;
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

