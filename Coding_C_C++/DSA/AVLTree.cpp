#include<iostream>
#include<string>

using namespace std; 

class Node{
    public:
    int data ;
    Node* left;
    Node* right;
    int height=0; 
 
    
    Node(int data){
        this->data = data ;
        left = NULL ; 
        right = NULL ; 
        height = 1 ; 
        }
};

    int getHeight(Node* node){
        if(node==NULL)
        return 0 ;
        else 
        return node->height;
    }
    Node* rightRotate(Node* y){
        Node* x = y->left ; 
        Node* z= x->right ; 
        x->right = y ; 
        y->left = z ; 

        y->height = 1+max((getHeight(y->left)) , getHeight(y->right));
        x->height = 1+max((getHeight(x->left)) , getHeight(x->right));

        return x ; 
    }

    Node* leftRotate(Node* y){
        Node* x = y->right ; 
        Node* z= x->left ; 
        x->left = y ; 
        y->right = z ; 

        y->height = 1+max((getHeight(y->left)) , getHeight(y->right));
        x->height = 1+max((getHeight(x->left)) , getHeight(x->right));

        return x;
    }

    int getBalance(Node* root ){
    if(root==NULL){
        return 0 ; 
    }
    int balanced = getHeight(root->right) - getHeight(root->left);
    return balanced ; 
    }

    Node* insertNode(Node* root , int item){
        if(root == NULL){
            return new Node(item);
        }
        else if(item>root->data){
            root->right = insertNode(root->right , item);
        }
        else if(item<root->data){
            root->left = insertNode(root->left , item);
        }
        else{
            return root; 
        }
        // now that we are past all that we know that data was not there most probably and we had to work hard to insert that data 
        // root is the parent 
        // that has the value 
        // now let us increase the height
        root->height = 1 + max((getHeight(root->left)) , getHeight(root->right));
        int balanced = getHeight(root->right) - getHeight(root->left);
        if(balanced>1 && item>(root->right)->data){
            return leftRotate(root);
        }
        if(balanced>1 && item<(root->right)->data){
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
        if(balanced<-1 && item>(root->left)->data){
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
        if(balanced<-1 && item<(root->left)->data){
            return rightRotate(root);
        }

        return root ; 
    }
    
    void inOrder(Node* root){
        if(root==NULL)
        return ; 
        inOrder(root->left);
        cout<<root->data<<endl; 
        inOrder(root->right);
    }
    
    void preOrder(Node* root){
        if(root==NULL)
        return ; 
        cout<<root->data<<endl; 
        preOrder(root->left);
        preOrder(root->right);
    }
    
    
    
    
    int minValueNode(Node* root){
        if(root==NULL){
            return 0 ; 
        }
        if(root->left==NULL){
            return root->data;
        }
        else{
            return minValueNode(root->left);
        }
    }

    
    Node* deleteNode(Node* root , int item){
        if(root == NULL){
            cout<<"Underflow"<<endl; 
            return root;
        }
        else if(item>root->data){
            root->right = deleteNode(root->right , item);
        }
        else if(item<root->data){
            root->left = deleteNode(root->left , item);
        }
        else{
            // Now we have reached that point where root == item 
            // so we have to delete this 
            if(root->left == NULL or root->right==NULL){
                if(root->left!=NULL){
                    Node* temp = root->left ; 
                    delete root ;
                    return temp ; 
                }
                else{
                    Node* temp = root->right ; 
                    delete root ;
                    return temp ; 
                }
            }
            else{
                int data = minValueNode(root->right);
                root->data = data ; 
                root->right=deleteNode(root->right,data);
            }
        }
        // Now we are tracking back in the event that we had to go downward 
        // so let us see what happens in this traceback 
        if(root==NULL){
            return root ; 
            // maybe the tree had one node and it is now deleted 
        }
         root->height = 1 + max((getHeight(root->left)) , getHeight(root->right));
        int balanced = getBalance(root);
        cout<<"Balanced:"<<balanced<<endl;
        
        if(balanced>1 && getBalance(root->right)>0){
            return leftRotate(root);
        }
        if(balanced>1 && getBalance(root->right)<0){
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
        if(balanced<-1 && getBalance(root->left)>0){
            cout<<"Balancing act"<<endl;
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
        if(balanced<-1 && getBalance(root->left)<0){
            cout<<"Balancing act"<<endl;
            return rightRotate(root);
        }
        return root ;        
    }
int main(){

    Node* root=NULL ; 
    
        root = insertNode(root, 10);
        root = insertNode(root, 20);
        root = insertNode(root, 30);
        root = insertNode(root, 40);
        root = insertNode(root, 50);
        root = insertNode(root, 25);
        root = insertNode(root , 3);
    
    preOrder(root);

        root = deleteNode(root , 20 );
    preOrder(root);
 
}