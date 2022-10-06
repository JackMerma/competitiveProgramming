#include <iostream>
#include "List.h"
using namespace std;

int main(){
    List *l = new List();
    l = l->append(1);
    cout<<"head:"<<l->head()<<endl;
    l = l->append(2);
    cout<<"head:"<<l->head()<<endl;
    l = l->append(3);
    cout<<"head:"<<l->head()<<endl;
    l = l->append(4);
    cout<<"head:"<<l->head()<<endl;
    l->to_string();
    l = l->delete_k(2);
    l->to_string();
    return 0;
}

