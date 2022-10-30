#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int a, b, c; cin>>a>>b>>c;
    int cost;
    string ty, name; //type and name

    vector<int> total(3, 0);
    vector<vector<string>> v(3, vector<string>());

    v[0].push_back("BAILES");
    v[1].push_back("COMIDA");
    v[2].push_back("CULTURA");

    while(cin>>cost){
        cin>>ty;
        cin.ignore();
        getline(cin, name);

        if(ty == "BAILES"){
            if(total[0] + cost <= a)
                total[0] += cost, v[0].push_back(name);
        }else if(ty == "COMIDA"){
            if(total[1] + cost <= b)
                total[1] += cost, v[1].push_back(name);
        }else{
            if(total[2] + cost <= c)
                total[2] += cost, v[2].push_back(name);
        }
    }

    for(auto fil: v)
        for(auto col:fil)
            cout<<col<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
