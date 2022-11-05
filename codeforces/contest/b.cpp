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

/**
banban
bnnbaa

ban
bna

banbanban
bnnbaaban
bnnnaabab

banbanbanbanban

bnnbanbaabanban
bnnnanbaababban
bnnnnnbaababbaa

bnnbaabanbanban
bnnnaababbanban
bnnnnababbaaban
bnnnnnbabbaabaa
*/

void solve(){
    int n; cin>>n;

    int i=1;
    int j=n;

    cout<<n/2+n%2<<endl;

    while(i<=j){
        cout<<i*3-2<<" "<<j*3<<endl;
        i++;
        j--;
    }

    /**

    int ob=(n+1)/3;
    int cant=n-ob;
    cout<<cant<<endl;

    int ini=2;
    int fin=(n+1);
    for(int i=fin+1;i<fin+4;i++)
        if(!(i%3))
            fin=i/3;
    for(int i=1;i<=cant;i++){
        if(!(ini%3)) ini++;
        cout<<ini<<" "<<fin*3<<endl;
        ini++;
        fin++;
    }
    */
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    clock_t z = clock();

    ll t ; cin>>t;

    while(t--)
        solve();

#ifndef ONLINE_JUDGE
    cout<<endl<<"Tiempo total: "<<fixed<<setprecision(3)<<(double)(clock()-z)/CLOCKS_PER_SEC<<endl;
#endif

    return 0;
}

