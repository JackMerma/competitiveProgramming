#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

typedef struct Nodo{
    int dato;
    struct Nodo *next = 0;
}Nodo;

typedef struct Pila{
    Nodo *head = 0;

    //metodos
    bool isEmpty(){
        return !head;
    }

    Nodo* separaLugar(int dato){
        Nodo *aux = (Nodo*)malloc(sizeof(Nodo));
        aux->dato=dato;
        return aux;
    }

    void push(int dato){
        Nodo *aux = separaLugar(dato);

        if(isEmpty()){
            head = aux;
        }else{
            aux->next = head;
            head = aux;
        }
    }

    void pop(){
        if(!isEmpty()){
            head = head->next;
        }
    }

    int top(){
        if(!isEmpty()){
            return head->dato;
        }
        return -1;
    }
}Stack;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin>>n;
    Stack st;

    for(int i=0;i<n;i++){
        int dato; cin>>dato;
        st.push(dato);
    }

    cout<<"Pila:";
    while(!st.isEmpty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    return 0;
}

