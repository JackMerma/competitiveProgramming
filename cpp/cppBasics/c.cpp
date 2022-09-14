#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

void buscar(int *arr, int n, int k, int *ans){
    int l=0;
    int r=n;

    while(l<r){
        cout<<"l:"<<l<<" y r:"<<r<<endl;
        int pos=(r+l)/2;

        if(*(arr+pos)==k){
            *ans=pos+1;
            return;
        }else if(*(arr+pos)>k) r=pos;
        else l=pos;
    }
    *ans=-1;
}

void printArreglo(int *arr, int n){
    cout<<"arreglo:";
    for(int i=0;i<n;i++) cout<<*(arr+i)<<" ";
    cout<<endl;
}

void busquedaBinariaArreglo(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    //mostrar datos
    printArreglo(arr, n);
    sort(arr, arr+n);
    printArreglo(arr, n);

    //dato a buscar
    int k;
    cin>>k;

    int pos;
    buscar(arr,n,k,&pos);
    
    cout<<"el elemento "<<k<<" se encuentra en la posicion "<<pos<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    busquedaBinariaArreglo();

	return 0;
}

