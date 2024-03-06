// balances BST or Not 

// |height LST - height RST | <= 1

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// Making the binary it is the data :
// 1 2 5 -1 -1 6 -1 -1 3 9 -1 -1 -1

// Making the tree
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

class Node{

public:
int data;
Node*left;
Node*right;

// root node yha pr kyo nahi banaya:

Node(int data){
this->data=data;
this->left=NULL;
this->right=NULL;
}

};

// function to create a Tree:->
Node* create_tree(){
int data;
cout<<"Enter the data: "<<endl; 
cin>>data;
// ek node create hue or uske ander maine data insert kiya 
Node*root=new Node(data);
// If data is -1 
if(data==-1){ // there is no data exist 
    return NULL;
}


  cout<<"Enter the data in the Left of : "<<data<<endl;
root->left=create_tree(); // here we call the function 
cout<<"Enter the data in the Right of : "<<data<<endl;
root->right=create_tree();

return root;

}

int height(Node*root){
if(!root) return 0;

// recusive case 
return max(height(root->left),height(root->right))+1;


}



// here we check the tree is balanced or not 
bool isbalanced(Node* root){
// base case 
if(!root) return true;  // if root is not exist 

// recusive case 

int left=height(root->left);
int right=height(root->right);

if(abs(left-right)<=1 and isbalanced(root->left) and isbalanced(root->right)){
return true ;
}
else {
    return false;
}


}


// to reduce the complecity of code by using the pair
class Pair{
public:
bool balanced;
int height;

};

// here reduced the complexity of the balanced code 
Pair fast_Balanced(Node*root){

// base case 
if(!root) return{true,0};

// recusive case 
Pair p;
Pair left=fast_Balanced(root->left);
Pair right=fast_Balanced(root->right);

p.height=max(left.height,right.height)+1;
if(abs(left.height-right.height)<=1 and left.balanced and right.balanced){
    p.balanced=true;
}
else{
    p.balanced=false;
}

return p;
}


/*
  HW 
// Tree to linkedlist  conversion :->
// case 1: Both side answer 

class LinkedList{

public:
Node*head,tail;

};

LinkedList BSTTOLL(Node*root){
// base case 

if(!root){
    
    return{NULL,NULL};

}

// recusive case



if(root->left and root->right){
    LinkedList left=BSTTOLL(root->left);
LinkedList right=BSTTOLL(root->right);
    LinkedList l;
 
 left.tail->right=root;
 root->right=right.head;
 l.head=left.head;
 l.tail=right.tail;
 return l;

}
if(!root->left and root->right){
LinkedList right= BSTTOLL(root->right);
root->right= right.head;
l.head=root;
l.tail= right.tail;   

    
}
if(root->left and! root->right){


    
}
else{



}


}

// print the linked list 
void print (Node*hea){

}
*/







int main() {
  Node*root=NULL;   // Here we initaised the root Node
root=create_tree();  // here root Node hold the address of the whole tree 
cout<<isbalanced(root)<<endl;
if(isbalanced(root)){
    cout<<"TREE IS BALANCED"<<endl;
}
else{
cout<<"NOT BALANCED"<<endl;


}



}