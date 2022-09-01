#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int MAX = 1000000;

void solve(){
    string str="ab";
    float r = (float) rand()/RAND_MAX;
    int ran = (int)(r*MAX)+1;

    string caseInput="";

    for(int i=0;i<ran/2;i++)
        caseInput+=str;

    cout<<caseInput<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

