#include "arrayStack.h"
#include <assert.h>
#include <iostream>
using namespace std;

template<typename T>
arrayStack<T>::arrayStack(int s){
    assert(s>0);

    size = s;
    data = new T[s];
    sp = data;

    // empty(newstack) = true
    assert(empty());

    // pop(newstack) = newstack
    pop();
    assert(empty());
}

template<typename T>
void arrayStack<T>::push(T e){
    if(sp < size + data)
        resize();
    *sp = e;
    sp++;

    //empty(push(S, I)) = false
    assert(!empty());

    // top(push(S, I)) = I
    assert(top() == e);
}

template<typename T>
void arrayStack<T>::pop(){
    if(empty()){
        //assert(); --> pop(newstack) = newstack
        return;
    }
    sp--;
    assert(sp - data != 0);
}

template<typename T>
T arrayStack<T>::top(){
    // top(newstack) = undefined
    assert(!empty());
    return *(sp - 1);
}

template<typename T>
bool arrayStack<T>::empty(){
    return sp == data;
}

template<typename T>
void arrayStack<T>::resize(){
    T *newData = new T[size + FACTOR];

    for(int i=0; i<size; i++)
        newData[i] = data[i];

    delete[] data;
    data = newData;
    //sp = data + size + 1;
    size += FACTOR;
}

int main(){
    arrayStack<int> arr1(5);
    arr1.push(3);
    arr1.push(6);
    arr1.push(10);
    arr1.push(13);

    //cout<<arr1.empty()<<endl;

    cout<<arr1.top()<<endl;
    arr1.pop();
    cout<<arr1.top()<<endl;
    arr1.pop();
    cout<<arr1.top()<<endl;
    arr1.pop();
    cout<<arr1.top()<<endl;
    arr1.pop();
}
