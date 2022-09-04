#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define endl "\n"
#define len length

void solve(){
    string str; cin>>str;

    int arr[2]={0};
    int n=str.len();

    for(int i=0;i<n;i++){
        arr[str[i]-'0']++;
    }

    if(arr[1]>arr[0])
        cout<<"WIN"<<endl;
    else
        cout<<"LOSE"<<endl;
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

