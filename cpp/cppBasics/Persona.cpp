#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

typedef struct Persona{
    string name;
    int edad;
    struct Persona *amigo;

    void toString(){
        cout<<"Información de la perona"<<endl;
        cout<<"nombre:"<<name<<endl;
        cout<<"edad:"<<edad<<endl;
        
        if(amigo){
            cout<<"Datos del amigo"<<endl;
            (*amigo).toString();
        }
    }

}Persona;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    Persona per1, per2;

    cin>>per1.name>>per1.edad;
    cin>>per2.name>>per2.edad;

    per1.amigo=&per2;

    per1.toString();
    
	return 0;
}

