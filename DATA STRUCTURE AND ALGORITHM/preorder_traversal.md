#include <bits/stdc++.h>
using namespace std;

class Tree{
    public:
    int data;
    Tree *left;
    Tree *right;
};

void tree_preorder(Tree* root){ // iterative method of preorder traversal
    stack<Tree*> st;
    Tree *t = root;
    while(t!=NULL || !st.empty()){
        if(t!=NULL){
            cout<<t->data<<" ";
            st.push(t);
            t = t->left;
        }
        else{
           t = st.top();
           t = t->right;
           st.pop();
        }
    }
}

void recursive_preorder(Tree* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    recursive_preorder(root->left);
    recursive_preorder(root->right);
}

int main(){
    cout<<"Enter value of root : ";
    int a;
    cin>>a;
    Tree *root = new Tree();
    root->data = a;
    // cout<<root->data;
    queue<Tree*>q;
    q.push(root);
    cout<<"Enter 0 if Tree is complete otherwise enter 1 : ";
    int k = 1;
    cin>>k;
    while(k){
        cout<<"for left node";
        cout<<endl<<"if there is no left node enter -1 : ";
        Tree *t = q.front();
        q.pop();
        cin>>a;
         if(a!=-1){
            Tree *p = new Tree();
            p->data = a;
            q.push(p);
            t->left = p;
        }
        cout<<"for right node";
        cout<<endl<<"if there is no right node enter -1 : ";
        cin>>a;
        if(a!=-1){
            Tree *p = new Tree();
            p->data = a;
            q.push(p);
            t->right = p;
        }

        cout<<"Enter 0 if Tree is complete otherwise enter 1 : ";
        cin>>k;
    }
    cout<<"PreOrder traversal : ";
    tree_preorder(root);
    //cout<<"preOrder traversal in recursive method : "<<recursive_preorder(root)
}
