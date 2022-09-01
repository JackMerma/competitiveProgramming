#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void calculate(char c, int &con){
    if(c=='1') con++;
    else con--;
}

void solve(){
    int n; cin>>n;
    string str1, str2;
    cin>>str1>>str2;

    int cstr1=0,cstr2=0;

    for(int i=0;i<n;i++){
        calculate(str1[i], cstr1);
        calculate(str2[i], cstr2);
    }

    if(cstr1==cstr2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin>>t;

    while(t--)
        solve();

	return 0;
}
