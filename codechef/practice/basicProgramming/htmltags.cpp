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
    string str; cin>>str;
    int n=str.length();

    if(n<4){
        cout<<"Error"<<endl;
        return;
    }

    if(str[0]=='<'&&str[n-1]=='>'&&str[1]=='/'){
        for(int i=2;i<n-1;i++){
            if(str[i]<48||(str[i]>57&&str[i]<97)||str[i]>122){
                cout<<"Error"<<endl;
                return;
            }
        }
        cout<<"Success"<<endl;
    }else{
        cout<<"Error"<<endl;
    }

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

