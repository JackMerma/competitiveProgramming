#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    string a,b;
    cin>>a>>b;
    int arrA[26]={0};
    int arrB[26]={0};

    int n=a.length();
    int m=b.length();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

