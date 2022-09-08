#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

void solve(){
    int n; cin>>n;
    string str; cin>>str;

    if(n!=5){
        cout<<"NO"<<endl;
        return;
    }

    int arr[5] = {0};

    for(int i=0;i<n;i++){
        if(str[i]=='T')
            arr[0]++;
        else if(str[i]=='i')
            arr[1]++;
        else if(str[i]=='m')
            arr[2]++;
        else if(str[i]=='u')
            arr[3]++;
        else if(str[i]=='r')
            arr[4]++;
    }
    int ans=0;

    for(int i=0;i<n;i++)
        ans+=arr[i];

    if(ans==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t; cin>>t;

    while(t--) 
        solve();

#ifndef ONLINE_JUDGE
    //cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

	return 0;
}

