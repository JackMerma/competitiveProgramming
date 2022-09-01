#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int r;cin>>r;

    if(r<=50)
        cout<<100<<endl;
    else if(r<=100)
        cout<<50<<endl;
    else
        cout<<0<<endl;

	return 0;
}
