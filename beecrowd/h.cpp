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

int vivos(int arr[], int len){
    int cant=0;
    for(int i=0;i<len;i++)
        if(arr[i]>0)
            cant++;
    return cant;
}

void solve(){
    int n, m, l; cin>>n>>m>>l;

    int len=n+m+5;
    int arr[l][len]={0};
    int cant[l]={0};

    for(int i=0;i<l;i++)
        for(int j=0;j<len;j++)
            arr[i][j]=0;

    for(int i=0;i<l;i++){
        int fa, k;
        cin>>fa>>k;
        cant[fa-1]=k;
        for(int j=0;j<k;j++){
            int fb; cin>>fb;
            arr[fa-1][fb-1]=1;
        }
    }

    int ans=0;
    while(ans<=m){
        int newCount=vivos(cant, l);
        cout<<"newCount:"<<newCount<<endl;
        cout<<endl;

        cout<<"cantidades:"<<endl;
        for(int i=0;i<l;i++)
            cout<<cant[i]<<" ";
        cout<<endl;

        cout<<"matrix:"<<endl;
        for(int i=0;i<l;i++){
            for(int j=0;j<len;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        if(newCount==1){
            ans++;
            break;
        }
        if(newCount==0)
            break;

        int posMenor=0;
        int minCant=cant[0];

        for(int i=0;i<l;i++){
            if(cant[i]&&cant[i]<minCant){
                minCant=cant[i];
                posMenor=i;
            }
        }

        int cartaNum=-1;

        for(int i=0;i<len;i++){
            if(arr[posMenor][i]){
                cartaNum=i;
                //arr[posMenor][i]=0;
                break;
            }
        }

        for(int i=0;i<l;i++){
            if(arr[i][cartaNum]){
                cant[i]--;
                arr[i][cartaNum]=0;
            }
        }
        ans++;
    }
    cout<<ans<<endl;
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

