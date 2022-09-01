/*
 * @author      : Jackson Merma (mermaportocarreroj@gmail.com)
 * @created     : 24/08/2022
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

string to_string(char c){return string(1,c);}
string to_string(bool b){return b?"true":"false";}
string to_string(const char* s){return string(s);}
string to_string(string s){return s;}
template<class T> string to_string(T v){
	bool f=1;
	string out;
	for(auto& x: v){
		if(!f)
			out+=" ";
			f=0;
			out+=to_string(x);
	}
	return out;
}

void DBG(){
	cerr<<"]"<<endl;
}
template<class H, class... T> void DBG(H h, T... t){
	cerr<<to_string(h);
	if(sizeof...(t))
		cerr<<",";
	DBG(t...);
}

#ifndef ONLINE_JUDGE
#define dbg(...) cerr<<"LINE("<<__LINE__<<") -> ["<<#__VA_ARGS__<<"]: [",DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

void solve(){
    string al, str;
    cin>>al>>str;

    int ans=0;
    int pos[26]={0};

    for(int i=0;i<26;i++)
        pos[al[i]-'a']=i;

    for(int i=1;i<str.length();i++)
        ans+=abs(pos[str[i]-'a']-pos[str[i-1]-'a']);//Math.abs

    cout<<ans<<endl;

}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;

    while(n--){
        solve();
    }
	return 0;
}

