#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n; cin>>n;
    string str; cin>>str;

    if(n<8){
        cout<<"WA"<<endl;
        return;
    }

    int ind1=-1;
    int ind2=-1;

    for(int i=0;i<n-3;i++){
        if(ind1==-1){
            if(str.substr(i,4)=="code")
                ind1=i;
        }
        if(ind2==-1){
            if(str.substr(i,4)=="chef")
                ind2=i;
        }

        if(ind1!=-1&&ind2!=-1)
            break;
    }
    if(ind1==ind2)
        cout<<"WA"<<endl;
    else{
        if(ind1<ind2)
            cout<<"AC"<<endl;
        else
            cout<<"WA"<<endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

	return 0;
}

