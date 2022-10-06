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
    l = l->insert_k(4, 20);
    l->to_string();
    return 0;
}

