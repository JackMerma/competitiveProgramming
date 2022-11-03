#include "arrayStack.h"
#include <assert.h>
#include <iostream>
using namespace std;

template<typename T>
arrayStack<T>::arrayStack(int s){
    assert(s>0);

    size = s;
    data = (T*)malloc(sizeof(T)*s);
    //data = new T[s];
    sp = data;

    // empty(newstack) = true
    assert(empty());

    //length(newstack) = false
    assert(!length());

    // pop(newstack) = newstack
    assert(empty() && !length());
}

template<typename T>
void arrayStack<T>::push(T e){
    if(size <= length()) resize();
    *sp = e;
    sp++;
    //cout<<"size:"<<size<<" cant:"<<sp-data<<endl;

    //empty(push(S, I)) = false
    assert(!empty());
    //length(push(S, I)) = true
    assert(length());
    // top(push(S, I)) = I
    assert(top() == e && data[length() - 1] == top());
}

template<typename T>
void arrayStack<T>::pop(){
    if(empty()){
        // empty(newstack) = true / length(newstack) = false
        assert(!length());
        return;
    }
    // pop(push(S, I)) = S
    assert(!empty() && (length() != 0));
    sp--;
}

template<typename T>
T arrayStack<T>::top(){
    // top(newstack) = undefined
    //assert(!empty());
    if(empty())
        throw "Operacion invalida";
    return *(sp - 1);
}

template<typename T>
bool arrayStack<T>::empty(){
    return !length();
}

template<typename T>
void arrayStack<T>::resize(){
    T *newData = (T*)malloc(sizeof(T)*(size + FACTOR));
    //T *newData = new T[size + FACTOR];

    for(int i=0; i<size; i++)
        newData[i] = data[i];

    delete[] data;
    data = newData;
    sp = data + size;
    size += FACTOR;
}

template<typename T>
int arrayStack<T>::length(){
    return sp - data;
}
/**
int main(){
    arrayStack<int> arr1(2);
    arr1.push(3);
    arr1.push(6);
    arr1.push(10);
    arr1.push(13);

    cout<<arr1.top()<<endl;
    arr1.pop();
    cout<<arr1.top()<<endl;
    arr1.pop();
    cout<<arr1.top()<<endl;
    arr1.pop();
    cout<<arr1.top()<<endl;
    arr1.pop();
}
*/
