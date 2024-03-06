#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// Tree ka input 
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 


class Node{

public:
	int data;
	Node*left;
	Node*right;

	Node(int data ){
  this->data=data;
  left=NULL;
  right=NULL; 

	}

};

// making the function:
Node*build_tree(){

int data;

cin>>data;

if(data==-1) return NULL;

// step A, B , C

//step A: create a node 
Node*root=new Node(data);

// step B : goes on left subtree:
root->left=build_tree();
// step C: goes on the right subtree

root->right=build_tree();

return root;
}

void preorder(Node*root){

// base case 
   if(root==NULL){
   	return;
   }

	// recusive case 
       cout<<root->data<<" ";
          preorder(root->left);
          preorder(root->right);

}




int main(){
	Node*root =NULL;
	root=build_tree();
cout<<"Preorder: "<<" ";
preorder(root);
	
}
