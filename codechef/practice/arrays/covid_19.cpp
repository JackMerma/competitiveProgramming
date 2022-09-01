#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int> dat;
    int sum=1;

    for(int i=1;i<n;i++){
        if(arr[i]-2<=arr[i-1]){
            sum++;
        }else{
            dat.push_back(sum);
            sum=1;
        }
    }
    dat.push_back(sum);
    sort(dat.begin(), dat.end());

    cout<<dat.front()<<" "<<dat.back()<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;

    while(t--)
        solve();

	return 0;
}


