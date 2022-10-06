#ifndef LIST_H

#define LIST_H

typedef struct Node {
    int data;
    Node* next;
}Node;

class List {
    public:
        List();
        List *append(int);
        int head();
        List *tail();
        bool isEmpty();
        int size();
        List *delete_k(int);
        void to_string();
    private:
        Node* last;  
};

#endif
