#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
int K = 100001;

void solve(){
    int n; cin>>n;

    int arr[K]={0};

    for(int i=0;i<n;i++){
        int d;cin>>d;
        arr[d]++;
    }

    for(int i=0;i<K;i++){
        if(arr[i]%2)
            cout<<i<<endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;cin>>t;

    while(t--)
        solve();
	return 0;
}
