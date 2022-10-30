#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(arr[0]!=arr[n-1]){
        if(arr[0]==arr[1])
            cout<<n<<endl;
        else
            cout<<1<<endl;
        return;
    }

    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            cout<<i+1<<endl;
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    while(n--)
        solve();
}
