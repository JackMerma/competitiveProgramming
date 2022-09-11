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

    if((n*(n+1))%4==0){
        int arr[1000001] = {0};
        cout<<"YES"<<endl;
        ll a=0, b=0;

        for(int i=n;i>0;i--){
            if(a>b){
                b+=i;
                arr[i]=1;
            }else{
                a+=i;
                arr[i]=-1;
            }
        }

        cout<<(n/2+n%2)<<endl;

        for(int i=0;i<=1000000;i++)
            if(arr[i]==1)
                cout<<i<<" ";
        cout<<endl;

        cout<<n/2<<endl;

        for(int i=0;i<=1000000;i++)
            if(arr[i]==-1)
                cout<<i<<" ";
        cout<<endl;

    }else{
        cout<<"NO"<<endl;
    }
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

