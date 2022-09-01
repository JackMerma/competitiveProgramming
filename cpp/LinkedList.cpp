#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void solve(){

}
void push(int dato){
    Nodo *aux = separaLugar(dato);

    if(isEmpty()){
        head = aux;
        return;
    }

    Nodo **iter = &(*head).next;

    while(*iter){
        iter = &(*iter)->next;
    }
    *iter = aux;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin>>t;
    while(t--) solve();

    return 0;
}

