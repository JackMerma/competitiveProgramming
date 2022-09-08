#include <bits/stdc++.h>
using namespace std;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define ull unsigned long long
#define ll long long
#define ld long double
#define pi 3.141592653589793238462
#define INF 2e9
#define len length
#define endl "\n"

struct Node{
    int data;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(){}
    Node(int d){
        data = d;
    }
};

typedef struct BST{
    Node * root = nullptr;

    bool empty(){
        return !root;
    }

    void insert(int d){
        Node *newNode = new Node(d);

        if(root == nullptr){
            root = newNode;
        }else{
            Node **iter = (root->data > d)? &(root->left): &(root->right);
            while(*iter){
                iter = (root->data > d)? &(root->left): &(root->right);
            }
            *iter = newNode;
        }
    }

    void inOrderIterative(Node *node){
        if(!node->left)
            inOrderIterative(node->left);
        cout<<node->data<<" ";
        if(!node->right)
            inOrderIterative(node->right);
    }

    void inOrder(){
        cout<<"In-Order: ";
        if(!empty())
            inOrderIterative(root);
    }

}bst;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    bst tree;

    for(int i=0;i<n;i++){
        int data; cin>>data;
        tree.insert(data);
    }

    tree.inOrder();

    return 0;
}
