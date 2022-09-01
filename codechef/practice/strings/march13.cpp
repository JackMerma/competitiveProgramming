#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

string al;

void solve(){
    string str;
    cin>>str;

    int n=str.length();
    string ans="";
    
    bool caso[n]={0};//1:upper, 0:lower
    for(int i=0;i<n;i++){
        caso[i]=(str[i]-'a'<0)?1:0;
        str[i]=tolower(str[i]);
    }

    for(int i=0;i<n;i++){
        if(str[i]=='_'){
            ans+=" ";
        }else if(str[i]=='.'||str[i]==','||str[i]=='!'||str[i]=='?'){
            ans+=str[i];
        }else{
            char trueChar=al[str[i]-'a'];
            if(caso[i])
                ans+=toupper(trueChar);
            else
                ans+=trueChar;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    al; cin>>al;
    while(t--) solve();

    return 0;
}

