#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int a, b;
    cin>>a>>b;
    int ca=2, cb=2;
    int ac=1, bc=2;

    while(true){
        if(ac>a){
            cout<<"Bob"<<endl;
            return;
        }
        ac+=ca*2-1;
        ca++;

        if(bc>b){
            cout<<"Limak"<<endl;
            return;
        }
        bc+=cb*2;
        cb++;
    }
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;

    while(t--)
        solve();
	return 0;
}
