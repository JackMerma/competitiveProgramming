#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define endl "\n"

void solve(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(n<2){
        cout<<1<<endl;
        return;
    }

    int ans[n]={0};
    ans[n-1]=1;

    for(int i=n-2;i>=0;i--){
        if((arr[i]>0&&arr[i+1]<0)||(arr[i]<0&&arr[i+1]>0))
            ans[i]=ans[i+1]+1;
        else
            ans[i]=1;
    }

    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;

}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t; cin>>t;

    while(t--) 
        solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total:"<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

