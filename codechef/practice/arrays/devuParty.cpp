#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int K = 100;

void solve(){
    int n;cin>>n;

    int arr[100]={0};

    for(int i=0;i<n;i++){
        int num;cin>>num;
        arr[num-1]++;
    }

    int ans=0;
    for(int i=0;i<K;i++)
        if(arr[i])
            ans++;
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;

    while(t--)
        solve();
	return 0;
}


