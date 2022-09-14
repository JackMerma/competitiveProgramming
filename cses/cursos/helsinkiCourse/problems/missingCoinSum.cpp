#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define umap unordered_map
#define uset unordered_set
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

void solve(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr, arr+n);
    int ans=0;
    int pint[n] = {0};

    for(int i=0;i<n;i++){
        pint[arr[i]-1]=1;
        if(!pint[ans]){
            cout<<ans+1<<endl;
            return;
        }
        if(ans<arr[i]-1)
            ans++;

        for(int j=0;j<i;j++){
            pint[j+arr[i]]=1;
            ans=j+arr[i]+1;
        }
    }
    cout<<"KE"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

    return 0;
}

