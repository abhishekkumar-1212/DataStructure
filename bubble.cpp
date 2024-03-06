// cycle detection in the linked list 

// Here we print the linked list by using the insertAt_first

#include<iostream>
using namespace std;

class Node{

public:
int data;
Node*next;

// make default constructor
Node(){
    this->data=0;
    this->next=NULL;
}

// making the default 
Node(){
this->data=0;
this->next=NULL;


}


// making the parameterised constructor 
Node(int data){
this->data=data;
this->next=NULL;
}

};


void insert_at_tail(Node*&head,Node*&tail,int data  ){
// If LL is empty 
if(head==NULL){
  
  // create a new Node 
  Node* newNode=new Node(data);
  head=newNode;
  tail=newNode;

return ;
}

// if LL is not empty 
Node*newNode=new Node(data);

tail->next=newNode;
tail=newNode;



}







void insertAt_first(Node*&head,Node*&tail,int data ){

// check if  LL is Empty
if(head==NULL){
Node*newNode=new Node(data);

head=newNode;
tail= newNode;
return;

}

// If LL is NON-Empty

// 1. create a new node 
Node*newNode=new Node(data);

// 2. link the newNode with the head 
newNode->next=head;

// 3. also update the head 
head=newNode;
}

// Now we print the linked list by using the print function 
void print(Node*head){

Node*temp=head;
while(temp!=NULL){

cout<<temp->data<<" ";
if(temp->next!=NULL)cout<<"->";
//2. update the temp 
temp=temp->next;


}



}


// Now create a findLength function

int FindLength(Node*&head){
Node*temp=head;
int len=0;
while(temp!=NULL){
temp=temp->next;
len++;


}

return len;

}




// Insert at the any position in the linkedList 
void insertAt_position(int data ,Node*&head,Node*&tail,int position){

// If LL is empty 
if(head==NULL){   

// 1: we create a new Node 
Node* newNode= new Node(data);

// and Head points to newNode 
head=newNode;
tail=newNode;

return ;
}

// If LL is NOT Empty

// Step: 1. find the position where we insert (Basically find current and previous pointer )

//1.1 handle first position 
if(position==0){    // basically we handle the edge cases 
 insertAt_first(head,tail,data);
 return ;

}

// 1.2 handle last position
int length=FindLength(head);
if(position>=length){
insert_at_tail(head,tail,data);   

return ;
}


//1.3 handle middle position between first and last 

int i=1;

Node*prev=head;

while(i<position){

prev=prev->next;
i++;

}
 Node*curr=prev->next;

// Step 2: CREATE A new Node 
Node*newNode=new Node(data);

// step3:
prev->next=newNode;
newNode->next=curr;



}

/*
void deleteNode(Node*&head,Node*&tail,int data  ,int position){

    // LL is Empty 
    if(head==NULL){

cout<<"LinkedList is Empty You can Not delete the empty List "<<endl;

    }

// delete_first_node   
if(position==0){

Node*temp=head;

//2. update the head 
head=head->next;
temp->next=NULL;
delete(temp);

}


// delete to last (tail Node );
int length=FindLength(head);
if(position==length){

// 1. find previous                                 

// 2.                 
prev->next=NULL;

//3. 
Node*temp=tail;


//4. update the tail
tail=prev;
delete(temp);


}


}

*/

bool CYCLEdetect(Node*&head){
Node*s=head;
Node*f=head;
while(f->next and s->next){
f=f->next->next;
s=s->next;

if(f==s) return true;


}

}

void bubble(Node*&head,Node*&tail){

// If LL is empty 
if(head==NULL){   

// 1: we create a new Node 
//Node* newNode= new Node(data);
Node*newNode=NULL;

// and Head points to newNode 
head=newNode;
tail=newNode;

return ;
}

//
// IT  is not empty

Node*newNode();

// tail->next=newNode;
// tail=newNode;
int len=FindLength(head);
for(int i=0;i<len;i++){

 for(int j=0;j<len-1;j++){
   if(head<head->next){
swap(head,head->next);

   }

 }

}




}


int main(){

// create object without dynamically 
Node*head=NULL;
Node*tail=NULL;


insertAt_first(head,tail,10);
insertAt_first(head,tail,20);
insertAt_first(head,tail,30);
insertAt_first(head,tail,40);
//InsertAtTail();

print(head);
cout<<endl;

bubble(head,tail);
/*
cout<<"after inserting at the tail: "<<endl;
insert_at_tail(head,tail,123);
print(head);

cout<<endl;

insertAt_position(130,head,tail,5);

print(head);

*/


// cycle detect in the linkedList and break the cycle of the linkedlist , merge sort,bubble sort, selection sort.




}