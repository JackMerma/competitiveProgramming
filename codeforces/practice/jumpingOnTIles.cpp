#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define ulli unsigned long long int
#define umap unordered_map
#define uset unordered_set
#define pqueue priority_queue
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

bool pos(pair<char, int> a, pair<char, int> b){
    if(a.first!=b.first)
        return a.first<b.first;
    return a.second<b.second;
}

bool posInvert(pair<char, int> a, pair<char, int> b){
    if(a.first!=b.first)
        return a.first>b.first;
    return a.second<b.second;
}

void solve(){
    string str; cin>>str;
    vector<pair<char, int>> arr;
    int n=str.length();

    for(int i=0;i<n;i++)
        arr.push_back(pair<char, int>(str[i], i+1));

    if(arr[n-1]>arr[0])
        sort(arr.begin(), arr.end(), pos);
    else
        sort(arr.begin(), arr.end(), posInvert);

    vector<int> sol;
    ll totalCost=0;
    ll count=0;
    bool entra=0;

    for(int i=0;i<n;i++){
        if(arr[i].second==1)
            entra=1;
        if(entra){
            totalCost+=(count)?abs((arr[i].first)-(str[sol[count-1]-1])):0;
            count++;
            sol.push_back(arr[i].second);
        }
        if(arr[i].second==n)
            entra=0;
    }

    cout<<totalCost<<" "<<count<<endl;

    for(auto dat:sol)
        cout<<dat<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t; cin>>t;

    while(t--) 
        solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

    return 0;
}

