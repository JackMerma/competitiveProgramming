#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

//estructuras
typedef struct persona{
    string name;
    int edad;
    struct persona *amigo=0;

    void toString(){
        cout<<"informacion personal"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"edad"<<edad<<endl;

        cout<<"informacion del amigo de "<<name<<endl;
        if(amigo)
            (*amigo).toString();
    }
}Persona;

void vectores();
void cadenas();
void estructuras();
void funciones();
void fastPow(int,int,int*);
void swap(int*,int*);

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    //vectores();
    //cadenas();
    //estructuras();
    funciones();

	return 0;
}

void vectores(){
    int n;
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++)
        cin>>num[i];

    int sum=0;

    for(int i=0;i<n;i++)
        sum+=num[i];

    for(int i=0;i<n;i++){
        if(sum-num[i]==num[i]){
            cout<<"ans:"<<num[i]<<endl;
            exit(0);
        }
    }
}

void cadenas(){
    string name;
    cin>>name;

    cout<<"hola "<<name<<endl;
}

void estructuras(){
    Persona per1, per2;
    string name1, name2;
    int edad1, edad2;

    cin>>name1>>name2;
    cin>>edad1>>edad2;

    per1.name=name1;
    per2.name=name2;

    per1.edad=edad1;
    per2.edad=edad2;

    per1.amigo=&per2;

    //salida de datos
    per1.toString();
}

void funciones(){
    int a, b, ans=1;
    cin>>a>>b;

    swap(&a,&b);
    fastPow(a,b,&ans);
    cout<<"resultado(paso por referencia):"<<ans<<endl;
}

void fastPow(int a, int b, int *ans){
    while(b){
        if(b&1)
            (*ans)*=a;
        a*=a;
        b>>=1;
    }
}

void swap(int *a, int *b){
    int a1=*a;
    int b1=*b;
    *a=b1;
    *b=a1;
}
