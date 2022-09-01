#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int conteo[5]={0};

int contar(char *name, int nameN, char *vo, int voN){
    int ans=0;

    for(int i=0;i<nameN;i++){
        for(int j=0;j<voN;j++){
            if(*(name+i)==*(vo+j)){
                ans++;
                conteo[j]++;
            }
        }
    }
    return ans;
}

void mostrarConteo(){
    cout<<"conteo de vocales"<<endl;
    string vo="aeiou";

    for(int i=0;i<5;i++)
        cout<<vo[i]<<":"<<conteo[i]<<endl;
    cout<<endl;
}

void contarVocales(){
    string nameString; cin>>nameString;
    char *name=&nameString[0];
    string voString="aeiou";
    char *vo=&voString[0];

    int ans = contar(name, nameString.size(), vo, 5);
    cout<<"el nombre "<<name<<" tiene "<<ans<<" vocales"<<endl;
    mostrarConteo();
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    contarVocales();

	return 0;
}

