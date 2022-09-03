#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

typedef struct Node{
    int dato;
    struct Node *siguiente;
}Node;

typedef struct LinkedList{
    Node *head;

    Node* crearNode(){
        Node *aux = (Node*)malloc(sizeof(Node));
        return aux;
    }

    bool isEmpty(){
        return !head;
    }

    void insert(int dato){
        Node *newNode=crearNode();
        newNode->dato=dato;

        if(isEmpty()){
            head=newNode;
        }else{
            Node **iter=&head->siguiente;

            while(*iter){
                iter=&(*iter)->siguiente;
            }
            *iter=newNode;
        }
    }

    void remove(int dato){
        if(!isEmpty()){
            if(head->dato==dato){
                head=head->siguiente;
            }else{
                Node **iter=&head->siguiente;

                while((*iter)->dato!=dato){
                    iter=&(*iter)->siguiente;
                    if(!*iter)
                        return;
                }
                *iter=(*iter)->siguiente;
            }
        }
    }

    int search(int dato){
        int ans=0;
        if(!isEmpty()){
            Node *iter=head;

            while(iter){
                if(iter->dato==dato)
                    return ans;
                iter=iter->siguiente;
                ans++;
            }
        }
        return -1;
    }

    void toString(){
        if(isEmpty()){
            cout<<"LinkedList vacío"<<endl;
        }else{
            Node *iter=head;

            cout<<"LinkedList:";
            while(iter){
                cout<<iter->dato<<" ";
                iter=iter->siguiente;
            }
            cout<<endl;
        }
    }
}LinkedList;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    LinkedList dat;

    for(int i=0;i<n;i++){
        int dato; cin>>dato;
        dat.insert(dato);
    }
    return 0;
}

