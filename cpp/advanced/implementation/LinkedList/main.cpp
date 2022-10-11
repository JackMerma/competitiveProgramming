#include <iostream>
#include "List.h"
using namespace std;

int main(){
    List *l = new List();
    l = l->append(1);
    l = l->append(2);
    l = l->append(3);
    l = l->append(4);
    l->to_string();
    l = l->insert_k(0, 20);
    l->to_string();
    l = l->insert_k(1, 71);
    l->to_string();
    l = l->insert_k(2, -1);
    l->to_string();
    l = l->insert_k(3, -2);
    l->to_string();
    l = l->insert_k(l->size(), -3);
    l->to_string();
    return 0;
}

