#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    string str; cin>>str;
    int ans=0;

    if(str.length()<4){
        cout<<"normal"<<endl;
        return;
    }

    for(int i=0;i<str.length()-3;i++){
        int al[26]={0};
        al[str[i]-'a']++;
        al[str[i+1]-'a']++;
        al[str[i+2]-'a']++;
        al[str[i+3]-'a']++;
        //abcdefghijklmnopkrstuvwxyz

        if(al[2]&&al[4]&&al[5]&&al[7]){
            ans++;
        }
    }
    if(ans)
        cout<<"lovely "<<ans<<endl;
    else
        cout<<"normal"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

    return 0;
}

