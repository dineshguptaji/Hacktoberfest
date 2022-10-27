#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};
class BinarySearchTree{
    private:
        Node *root;
    public:
        BinarySearchTree(){
            this->root=NULL;
        }

        void insertIterative(Node *t,int key){
            Node *prev=NULL;
            if(t==NULL){
                Node *p=new Node(key);
                root=p;
                return;
            }
            while(t!=NULL){
                prev=t;

                if(t->data==key){
                    return;
                }
                else if(key<t->data){
                    t=t->left;
                }
                else
                    t=t->right;
            }

            Node *p=new Node(key);
            if(key>prev->data){
                prev->right=p;
            }
            else{
                prev->left=p;
            }
        }
        void insertIterative(int key){
            insertIterative(root,key);
        }

        Node* insertRecursive(Node *p,int key){
            Node *t;
            if(p==NULL){
                t=new Node(key);
                return t;
            }
            if(key<p->data){
                p->left=insertRecursive(p->left,key);
            }
            else if(key>p->data)
                p->right=insertRecursive(p->right,key);
        }

        void insertRecursive(int key){
            if(root==NULL)
                root=insertRecursive(root,key);
            else
                insertRecursive(root,key);
        }

        void inorder(Node *t){
            if(t!=NULL){
                inorder(t->left);
                cout<<t->data<<" ";
                inorder(t->right);
            }
        }
        void inorder(){
            inorder(root);
            cout<<endl;
        }

        bool searchIterative(int key){
            if(root==NULL){
                return false;
            }
            Node *t=root;
            while(t!=NULL){
                if(t->data==key)
                    return true;
                else if(key<t->data)
                    t=t->left;
                else
                    t=t->right;
            }
            return false;
        }

        bool searchRecursive(Node *p,int key){
            if(p==NULL)
                return false;
            else if(p->data==key)
                return true;
            else if(key < p->data)
                return searchRecursive(p->left,key);
            else
                return searchRecursive(p->right,key);
        }
        bool searchRecursive(int key){
            return searchRecursive(root,key);
        }
};

int main(){
    BinarySearchTree t;
    t.insertRecursive(10);
    t.insertRecursive(20);
    t.insertRecursive(11);
    t.insertRecursive(15);
    t.inorder();
    cout<<t.searchRecursive(20)<<endl;
    cout<<t.searchRecursive(10)<<endl;
    return 0;
}
