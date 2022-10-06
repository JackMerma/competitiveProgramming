#include "List.h"
#include <iostream>
using namespace std;

List::List(){
    last = NULL;
}

bool List::isEmpty(){
    return last == NULL;
}

List* List::append(int e){
    Node *n = new Node;
    n->data = e;

    if(last == NULL){
        last = n;
        last->next = last;
        return this;
    }

    n->next = last->next;
    last->next = n;
    last = n;
    return this;
}

int List::head(){
    return last->next->data;
}

int List::size(){
    int c = 0;
    Node *iter = last;

    while(iter){
        iter=iter->next;
        if(iter == last)
            iter = NULL;
        c++;
    }

    return c;
}

List* List::insert_k(int index, int data){
    int s = size();
    if(s+1 < index) return this;
    
    if(isEmpty()||s == index)
        return append(data);

    cout<<"LAST"<<endl;

    Node *pnt = last;
    Node *n = new Node();
    n->data = data;

    while(index--)
        pnt=pnt->next;
    n->next = pnt->next;
    pnt->next=n;
    
    return this;
}

List* List::delete_k(int index){
    if(!isEmpty()){
        if(last == last->next){
            if(index == 0)
                last = NULL;
            return this;
        }

        Node *pnt = last;
        while(index--){
            pnt=pnt->next;
            cout<<"dato:"<<pnt->data<<endl;
            if(pnt == last)
                return this;
        }
        cout<<pnt->data<<endl;
        pnt->next=pnt->next->next;
        if(pnt->next == last){
            cout<<"KHE"<<endl;
            last = pnt;
        }
    }
    return this;
}

void List::to_string(){
    cout<<"List: ";

    Node *pnt = last;
    while(pnt){
        pnt=pnt->next;
        cout<<pnt->data<<" ";
        if(pnt == last)
            pnt = NULL;
    }
    cout<<endl;
}
