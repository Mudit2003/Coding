#include <iostream>
#include <string>

using namespace std ; 

class RedBlackTree{

    private:
    class Node{
        public:
        int data ;
        Node* left ; 
        Node* right ; 
        Node* par ; 
        char color ; 

        Node(int key){
            data = key; 
            left = NULL ; 
            right = NULL ;
            color = 'R';
            par = NULL ;
        }
    };
    public:
    Node* root = NULL ; 
    void leftRotate(Node* x){
        Node* y = x->right ; 
        if(x->par==NULL) root = y ; 
        else if(x == x->par->left)x->par->left = y ;
        else x->par->right = y ;
        Node* z = y->left; 
        y->left = x ; 
        y->par = x->par ; 
        x->par = y ;
        if(z!=NULL) 
        z->par = x ; 
        x->right = z;
    }
    
    void rightRotate(Node* y){
        Node* x = y->left ; 
        if(y->par==NULL) root = y;  
        else if(y == (y->par)->left) (y->par)->right = y ; 
        else (y->par)->right = x ;
        Node* z = x->right ; 
        x->right = y ;
        x->par = y->par ; 
        y->par = x ;
        z->par = y ; 
        y->left = x;
    }

    void balance(Node* z){
        Node* w ,*x , *y;
        while((z->par)->color == 'R'){
        
        y = z->par ; 
        x = (z->par)->par ; 
        if(y == x->left){
            w = x->right ; 
            if(w->color =='R'){
                w->color = 'B';
                y->color = 'B';
                x->color = 'R';
            }
            if(z == y->right){
                z = y ;
                leftRotate(z);
            }
            rightRotate(z->par);
        }else{// y == x->right
            w = x->left ; 
            if(w!=NULL && w->color =='R'){
                w->color = 'B';
                y->color = 'B';
                x->color = 'R';
            }
            if(z == y->left){
                z = y ;
                rightRotate(z);
            }
            leftRotate(z->par);

        }
        }
    }
    Node* insertNode(Node*& root , int key){
        Node* z = new Node(key);
        Node* x = root ;
        Node* y = NULL ; 
        while(x!=NULL){
            y = x ; 
            if(key>x->data){
                cout<<"x = x->right"<<endl;
                x = x->right ; 
            }else if(key<x->data){
                cout<<"x = x->left"<<endl;
                x = x->left ; 
            }else{
                return x; // == case
            }
        }
        if(y==NULL){
            z->color = 'B';
            return z ; 
        }
        else if(key>y->data){
            cout<<"Right case"<<endl;
            z->par = y ; 
            y->right = z ; 
        }
        else{
            cout<<"left case"<<endl;
            z->par = y ;
            y->left = z ; 
        }
        balance(z);
        return root; 
    }

    void preOrder(Node* root){
        if(root==NULL)
        return ; 
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
};

template <typename T>
class RedBlackTreeRecursive{
    private:
        class Node{
            T data ; 
            Node* left ; 
            Node* right ; 
            char color ; 
        Node(T data){
            T data = NULL;
            left = nullptr ; 
            right = nullptr ; 
            color = 'R';
        }
        };
        public:
        Node* insertNode(Node* root ,T item ){
            if(root==nullptr){
                return new Node(item);
            }
            if(root->data == item) return root ; 
            if(item > root->data ){
                root->left = insertNode(root->left , item);
            }
            else{
                root->right = insertNode(root->right , item);
            }

            // the question is about finding the uncle 
            // that becomes a tedious task 
            // a very uphill task as it seems
            

        }
        Node* leftRotate(Node* x , Node* y){
            Node* z = x->left ; 
            x->left = y;
            y->right = z;
        }
        Node* rightRotate(Node* x , Node* y){
            Node* z = x->right ; 
            x->right = y;
            y->left = z;
        }

        
};
int main(){
    RedBlackTree T;
    T.root = T.insertNode(T.root , 5);
    T.root = T.insertNode(T.root , 7);
    T.root = T.insertNode(T.root , 9);
    T.preOrder(T.root);
}