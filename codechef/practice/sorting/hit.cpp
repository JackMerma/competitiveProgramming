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
     vector<int> arr(n);

     for(int i=0;i<n;i++)
         cin>>arr[i];
     sort(arr.begin(), arr.end());

     int k=n/4;
     if(arr[k]!=arr[k-1]&&arr[2*k]!=arr[2*k-1]&&arr[3*k]!=arr[3*k-1])
         cout<<arr[k]<<" "<<arr[2*k]<<" "<<arr[3*k]<<endl;
     else
         cout<<-1<<endl;

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

