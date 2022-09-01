#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

typedef struct persona{
    string nombre;
    string apellido;
}persona;

void arregloReferencia();
int suma(int*,int);
void estructuraReferencia();
void imprimeDatos(persona *);
void ordenar();
void printArray(int*, int);

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    //arregloReferencia();
    //estructuraReferencia();
    ordenar();
    
	return 0;
}

void arregloReferencia(){
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum=0;
    sum = suma(arr, n);
    cout<<"la suma total es:"<<sum<<endl;
}

int suma(int *arr, int n){
    int sum=0;
    int *pnt=arr;

    for(int i=0;i<n;i++){
        sum+=*pnt;
        pnt++;
    }
    return sum;
}

void estructuraReferencia(){
    persona per;
    string n,a;
    cin>>n>>a;

    per.nombre=n;
    per.apellido=a;

    imprimeDatos(&per);
    cout<<"nuevo nombre:"<<per.nombre<<endl;
}

void imprimeDatos(persona *per){
    cout<<"datos"<<endl;
    cout<<"nombre:"<<((*per).nombre)<<endl;
    cout<<"apellido:"<<((*per).apellido)<<endl;
    (*per).nombre="fernando";
}

void ordenar(){
    int n;cin>>n;
    int arr[n]={0};

    for(int i=0;i<n;i++)
        cin>>arr[i];

    printArray(arr, n);
    sort(arr, arr+n);
    printArray(arr, n);
}

void printArray(int *arr, int n){
    cout<<"Arreglo:";
    for(int i=0;i<n;i++)
        cout<<*(arr+i)<<"-";
    cout<<endl;
}
