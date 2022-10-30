#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int n; cin>>n;
    int fir; cin>>fir;

    vector<int> perm;
    perm.push_back(fir+1);

    for(int i=1;i<n;i++){
        int cant; cin>>cant;
        perm.insert(perm.begin()+(i-cant), i+1);
    }

    for(int num:perm)
        cout<<num<<" ";
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
