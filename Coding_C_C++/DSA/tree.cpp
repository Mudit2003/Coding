#include <iostream>
#include <string>
#include <vector>
#include<queue>


class Tree
{

public : 
  struct node
  {
    std::string data;
    struct node *left;
    struct node *right;
    node(std::string data)
    { // pointer reference is used with this in cpp
      this->data = data;
      left = NULL;
      right = NULL;
    }
    node(std::string data, struct node *left, struct node *right)
    { // pointer reference is used with this in cpp
      this->data = data;
      left = new struct node;
      right = new struct node;
    }
    node() {}
  } ;
// there was no need to make this strucutre as we can do the same stuff using a class 
// In cpp class is the same thing as structure 


  node *root;

  node *buildtree(node *root)
  {
    root = new node;
    std::cout << "Enter the data at root:";
    std::cin >> root->data;
    if (root->data == "-1")
    {
      delete root; // base case condition
      root = NULL;
      return root;
    }
    // lines of recursive condition
    std::cout << "Enter the data for inserting at the left of " << root->data << std::endl;
    root->left = buildtree(root->left); // building the left half of tree
    std::cout << "Enter the data for inserting at the right of " << root->data << std::endl;
    root->right = buildtree(root->right); // building the right half of tree
    return root;
  }

  

  /*void traversepreorder(node *root)
  {
    // first thing we should do is to check the root
    // checking the root means lets start with root
    if (root == NULL)
      return;
    std::cout << root->data << std::endl;
    if (root->left != NULL)
      traversepreorder(root->left);
    if (root->right != NULL)
      traversepreorder(root->right);
    return;
  }*/
  /*void traverseinorder(node *root)
  {
    // Inorder implies left centre right
    // first thing we will do is check left of root
    if (root == NULL)
      return; // only one case - empty list
    if (root->left != NULL)
      traverseinorder(root->left);
    std::cout << root->data << std::endl;
    if (root->right != NULL)
      traverseinorder(root->right);
    return;
  }*/
  /*void traversepostorder(node *root)
  {
    // post order traversal means going left , right then centre
    if (!root)return;

    if (root->left)
      traversepostorder(root->left);
    if (root->right)
      traversepostorder(root->right);
    std::cout << root->data;
    return;
  } */
  // traverse level order
  // level order traversal means what ?? let us have a look
  // all the elements on the same level are to be printed
  // sounds interesting and cumbersome at the same time

  /*void traverselevelorder(node* root){
 // it has to be a recursion tree as in fibonacci
  traverseinorder(root->left) ;
  traverseinorder(root->right);
  }*/

  void traversepreorder(node *root){
    if (root == NULL)
      return;
    node* ptr = root;
    std::vector<node*> v;
    v.push_back(NULL);

    while (ptr != NULL)
    {
      std::cout << ptr->data << std::endl;
      if(ptr->left != NULL)
      {
        if(ptr->right!=NULL)v.push_back(ptr->right);
        ptr = ptr->left;
      }
      else
       if(ptr->right!=NULL)ptr = ptr->right ;
       else{ ptr = v.back();
       v.pop_back();}
    }
  } 

  void traverseinorder(node* root){
  // when traversing post order order is left right node 
  // that means we will first have a look at left then right and then node 
  // this mean we have to store both node and right 
  if(root==NULL){
  std::cout<<"Empty List";
  return ;
  }
  std::vector<node*> stack;
  stack.push_back(NULL);
  node* ptr = root ; 
  while(!stack.empty()){
    if(ptr!=NULL){
      stack.push_back(ptr);
      ptr = ptr->left ;  
  }
    else{
      // now ptr is null 
      // so let us pop it 
      ptr = stack.back();
      stack.pop_back();
      std::cout<<ptr->data<<std::endl; 
      if(ptr->right!=NULL)ptr=ptr->right ; 
      else ptr = NULL ; 
      
    }

 
  
  }

  }

  //Traversing post order is what we are doing now  
  // here it is left right centre 
  // thus we will look for right first and then centre 
  // if it is a centre node it will be traversed last 
  // either we could do it so as to do it in a better way 
  void traversepostorder(node* root){
  if(root==NULL){
    std::cout<<"Empty Tree";
    return ; 
  }  // empty tree condition 
  
  std::vector<node*>stack,right ;  // stacks to store central value and right respectively 
  node* ptr = root ; 
  node* temp ; 
  stack.push_back(NULL);  // phi pushed as per the algorithm 
  while(stack.empty()==false){ 
      stack.push_back(ptr);
      if(ptr->right!=NULL){
        stack.push_back(temp);  // the temp pushed on the stack is the negative value of right that we thought of
        right.push_back(ptr->right);
      }
      if(ptr->left!=NULL){
      ptr = ptr->left ; // ultimate step 
      continue ; 
    }
    // this means print the data at the pointer as both of it's left and right are null 
      while(stack.back()!=temp&&stack.empty()==false){
        ptr=stack.back();
        stack.pop_back();
        std::cout<<ptr->data<<std::endl; 
      }
      // now the time has came when while failed thus stack.back()==temp 
      // so now we move on to the right stack
      ptr = right.back();
      right.pop_back();
      stack.pop_back();
     
    }
  }
  // this gets into an infinite loop 

  void levelordertraversal(node* root){
    // level order traversal needs insertion into a levelueue 
    // the advantage of levelueue is that we can insert from one end and delete from other 
    // so we can do something like insert nodes of both left and right 
    std::queue<node*> level;   // decalration of the queue 
    //store node 
    // level order traversal is the thing at this point of time 
     level.push(root);  // first element that is root is printed 
    node*temp ; 
     while (!level.empty()){   // level is not empty hence the size is 1 
      std::cout<<level.size()<<std::endl; // size of level is printed to be one 
      for(int i = 0,n=level.size(); i<n ; i++){
      std::cout<<level.front()->data;   // this will print Mudit 
      temp = level.front();
      level.pop();
      if(temp->left!=NULL)
      level.push(temp->left);
      if(temp->right!=NULL)
      level.push(temp->right);
      std::cout<<" ";
       }
      std::cout<<std::endl; 
     }
     
  }

  void morrisTraversal(Node* root)
};

class BinarySearchTree : private Tree{
  node* find(node* root , std::string item , node** save ){
    while(root!=NULL){
    if(root->data == item){
      return root ; 
    }
    if(root->data>item){
      *save = root ; 
      root = root->left ; 
    }
    else{*save = root ; 
    root = root->right ;
    }
    }
    return NULL ; 
  }

node * save = NULL ; 
node* find (node* root , std::string item){
if(!root)return NULL ; 
if(root->data==item)return root ; 
root->data>item?save = root , root = root->left  :save = root ,  root = root->right ; 
}
  node* insertbinarysearchtree(node* root , std::string item ){
  node* temp = new node(item); 
  if(root==NULL){
    root = temp ; 
    return root ; 
  }
  node* save = NULL; 
  node* loc = find( root , item , &save);
  if(loc==NULL){
  
    if(item > save->data){
      save->right = temp ; 
    }
    else {
      save->left = temp ; 
    }
  }
  return root ; 
  }
  bool isLeft(node* par , node* loc){
    if(loc==par->left)return true ; 
    else return false ; 
  }

  void del(node*& loc , node*& par){
  if(loc->left==NULL){
   if (loc==par->left)
   {
    par->left = loc->right;
    delete loc ; 
   }
   else
   {
    par->right = loc->right; 
    delete loc; 
   }   
  }
  
  }
};

int main(void)
{
  Tree t1;
  t1.root;
  t1.root = t1.buildtree(t1.root);
  t1.levelordertraversal(t1.root);
  // t1.root
  // t1.root;
  // t1.root->data = "Mudit";
  // Let us guess how creating a tree will be like
  // The problem is pushing into the tree
  // We could always do something as to make the new coming element root
  // But let us think of it otherwise
  // Same as traversal creation could be preorder , postorder or inorder whose definations I am yet to learn
}