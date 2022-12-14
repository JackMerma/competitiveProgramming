#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "stack.h"

#define FACTOR 10

template <typename T>
class arrayStack: public stack<T>{
    private:
        T* data;
        int size; //memory size
        T* sp;
        void resize();
    public:
        arrayStack(int);
        void push(T);
        void pop();
        T top();
        bool empty();
        int length();
};
#endif
