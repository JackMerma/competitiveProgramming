/**
                █▀ █ █▀▄▀█ █▀█
                ▄█ █ █░▀░█ █▀▀
 
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠙⣿⣿⣿⣎⣿⣹⢋⣴⣿⣿⣿⣿⣿⡇⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⠁⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠂⠈⠛⣿⣿⠿⠿⠋⠉⠁⠄⠙⠛⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⢠⣦⣤⣤⣴⣶⡤⠤⣶⣾⣿⣤⣄⡀⣨⣛⡁⠠⣾⡀⠄⠄⠄
         ⠄⠄⠄⠄⢰⣿⣿⣿⣿⣿⢿⠄⢀⢼⣿⣿⣿⣿⣿⣾⣋⣁⣸⣿⠃⠄⠄⠄
         ⠄⠄⠄⠄⠄⠍⣿⣿⠟⠁⠐⠄⠃⢸⣿⢋⣿⣿⣿⣿⣿⣿⣿⣿⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⡾⠋⠄⠄⠄⠄⠈⣴⣷⠿⣿⠿⣿⣿⣿⣿⣿⠃⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠁⠄⠄⠄⠄⠄⠄⠄⠄⣀⠄⠄⢸⣿⣿⡿⠁⠄⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⡆⡄⣬⣣⢿⣾⣶⠄⣿⣿⡿⠁⠄⠄⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⠋⠁⡟⣻⠻⣿⠇⠄⣿⠻⠁⠄⠄⠄⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢰⡇⠄⠄⠄⠄⠄⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⡀⠄⠄⠄⠄⢀⡝⢀⡿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
         ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠱⢠⣀⡀⣤⡾⢁⣿⠃⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
*/

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

bool verify(vector<bool> arr){
    for(int i=0;i<(int)arr.size();i++)
        if(arr[i]==0)
            return 1;
    return 0;
}

void solve(){
    int n; cin>>n;
    ll s; cin>>s;

    /**
    vector<pair<ll, int>> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(), arr.end(), byCost);
    */
    vector<ll> arr(n);
    vector<bool> path(n, 0);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int fp=0;
    int minAux=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<minAux){
            fp=i;
            minAux=arr[i];
        }
    }

    if(minAux>s){
        cout<<0<<endl;
        return;
    }

    int ans=1;
    s-=arr[fp]*2;
    path[fp]=1;
    int last=fp;

    while(verify(path)&&s>0){
        ll cost=INF;
        ll index=-1;
        for(int i=0;i<n;i++){
            if(path[i]==0){
                if(abs(i-last)+arr[i]<cost){
                    index=i;
                    cost=abs(i-last)+arr[i];
                }
            }
        }
        if(cost>s)
            break;
        s-=cost+arr[index];
        //totalCost+=cost+arr[index];
        ans++;
        path[index]=1;
    }
    cout<<ans<<endl;
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

