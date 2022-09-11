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

int fact[9];
set<string> s;
string str;

void calculateFact(){
    fact[0]=fact[1]=1;
    for(int i=2;i<9;i++)
        fact[i]=i*fact[i-1];
}

void cases(vector<int> con, string newStr, int size){
    if(size==str.size()){
        s.insert(newStr);
        return;
    }
    for(int i=0;i<str.size();i++){
        if(!con[i]){
            con[i]=1;
            cases(con, newStr+str[i], size+1);
            con[i]=0;
        }
    }
}

void solve(){
    cin>>str;

    int arr[26]={0};
    int n=str.length();

    for(int i=0;i<n;i++)
        arr[str[i]-'a']++;

    calculateFact();
    int total=fact[n];

    for(int i=0;i<26;i++)
        if(arr[i])
            total/=fact[arr[i]];

    cout<<total<<endl;
    vector<int> ss(n, 0);
    cases(ss, "", 0);

    for(auto dat:s)
        cout<<dat<<endl;
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

