#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define ulli unsigned long long int
#define umap unordered_map
#define uset unordered_set
#define pqueue priority_queue
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

void solve(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxNum=arr[0], minNum=arr[0];

    for(int i=0;i<n;i++){
        minNum=min(minNum, arr[i]);
        maxNum=max(maxNum, arr[i]);
    }

    int a=-1, b=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==minNum&&a==-1)
            a=i;
        if(arr[i]==maxNum)
            b=i;
    }

    if(a==0||b==n-1){
        cout<<maxNum-minNum<<endl;
        return;
    }
    int ans=max(maxNum-arr[b+1], arr[a-1]-minNum);
    for(int i=0;i<n-1;i++)
        if(arr[i]>=arr[i+1])
            ans=max(ans, arr[i]-arr[i+1]);
    cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t; cin>>t;

    while(t--) 
        solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

