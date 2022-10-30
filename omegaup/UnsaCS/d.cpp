#include <bits/stdc++.h>
using namespace std;

int bestOption(int pos, vector<int> &arr){
    for(int i=pos;i<9;i++){
        if(!arr[i]){
            arr[i]++;
            return i+1;
        }
    }
    return -1;
}

void solve(){
    string str; cin>>str;
    vector<int> arr(9, 0);
    int n = str.length();
    bool change = 0;
    for(int i=0;i<n;i++){
        if(++arr[str[i]-'1'] > 1){
            int pre = str[i]-'1';
            int best = bestOption((change)?0:pre+1, arr);
            if(best == -1){
                int num = stoi(str);
                num+=10*(n-i-1);
                str=to_string(num);
                i-=2;
                change=0;
            }else
                str[i]=to_string(best)[0];
            arr[pre]--;
        }
    }
    cout<<str<<endl;
}

int main(){
    solve();

    return 0;
}
