#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define endl "\n"

typedef struct Node{
    int dato;
    struct Node * siguiente;
}Node;

typedef struct Queue{
    Node *front;
    Node *back;

    Node * crearNodo(){
        Node *n = (Node*)malloc(sizeof(Node));
        return n;
    }

    bool isEmpty(){
        return !back;
    }

    void push_back(int dato){
        //Node *aux = new Node();
        Node *newNode=crearNodo();
        newNode->dato=dato;
        if(isEmpty()){
            front=back=newNode;
        }else{
            back->siguiente=newNode;
            back=newNode;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Cola vacía"<<endl;
        }else{
            if(!front->siguiente){
                front=back=0x0;
            }else{
                front=front->siguiente;
            }
        }
    }

    int top(){
        if(isEmpty()){
            cout<<"Cola vacía"<<endl;
            return -1;
        }else{
            return front->dato;
        }
    }
} Cola;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;cin>>n;
    Cola c;

    for(int i=0;i<n;i++){
        int dato; cin>>dato;
        c.push_back(dato);
    }

    cout<<"Cola:";
    while(!c.isEmpty()){
        cout<<c.top()<<" ";
        c.pop();
    }
    cout<<endl;

    return 0;
}
