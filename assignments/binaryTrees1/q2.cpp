// Find the min value in Binary Tree
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int minvalue(Node* root){
    if(root==NULL) return INT_MAX;
    int leftmin = minvalue(root->left);
    int rightmin = minvalue(root->right);
    return min(root->val,min(leftmin,rightmin));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(-4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    cout<<"minimum value in Binary Tree: "<<minvalue(a)<<endl;
    return 0;
}