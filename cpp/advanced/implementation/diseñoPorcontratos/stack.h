#ifndef STACK_H
#define STACK_H
template <typename T>
class stack{
    public:
        virtual void push(T) = 0;
        virtual void pop() = 0;
        virtual T top() = 0;
        virtual bool empty() = 0;
        virtual int length() = 0;
};
#endif
