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
    string str; cin>>str;

    bool real=0, fake=0;

    for(int i=0;i<n;i++){
        if(str[i]!='.')
            real=!real;
        
        if(str[i]=='T')
            fake=0;
        else if(str[i]=='H')
            fake=1;

        if(real!=fake){
            cout<<"Invalid"<<endl;
            return;
        }
    }
    if(!fake)
        cout<<"Valid"<<endl;
    else
        cout<<"Invalid"<<endl;

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

