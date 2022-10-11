#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"
#include "E.h"

int main(){
    A *a = new E();
    //a->goo(); error no existe goo en A
}
/**
    
    A -> padre
    B : A -> hijo

    B b1 = new B();
    B b2 = new A(); // no funciona
    A a1 = new B(); // A es un padre de B
 */
