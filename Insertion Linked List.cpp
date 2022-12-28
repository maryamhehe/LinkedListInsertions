#include<iostream>
using namespace std;

class Node{
	int data;
	Node* next;	
	
	public:
//		Node();
//		Node(int data){
//			this->data= data;
//			this->next= NULL;
//		}
	void insertFirst(int data);
	void insertLast(int data);	
	void insertMiddle(int data);
	void display();
};

Node* head = NULL;
int size=0;
void Node::insertFirst(int data){
	Node* newnode = new Node();
	newnode->data=data;
	newnode->next= head;
	head= newnode;
	size++;
}


void Node:: insertLast(int data){
 
  Node* newNode = new Node();
  
  newNode->data = data;
  
  newNode->next = NULL; 
  
 
  if(head == NULL) {
    head = newNode;
  }
 else {
    
    Node* temp = head;
    while(temp->next != NULL)
      temp = temp->next;

    temp->next = newNode;
  }
  size++;    
}
	
void Node:: insertMiddle(int data){
	Node* midNode = new Node();
	midNode->data= data;
	
	if(head==NULL){
		head= midNode;
	}
	else{
		int mid= (size%2==0)? (size/2): (size+1)/2;
	    
	    Node* temp= head;
	    
		while(--mid){
		temp= temp->next;	
		}
		midNode->next= temp->next;
		temp->next= midNode;
		size++;
	}
	
}	
	
void Node:: display(){
	Node* node = new Node();
	Node* temp= head;
	while(temp!=NULL){
		cout<<temp->data;
		temp = temp->next;
			cout<<" ";
		}
	
}

int main (){

Node obj;
obj.insertFirst(23);
obj.insertFirst(45);
obj.insertFirst(8);
obj.insertFirst(22);
obj.insertFirst(90);
cout<<"Inserting First ";
obj.display();
obj.insertLast(100);
obj.insertLast(120);
obj.insertLast(140);
obj.insertLast(160);
cout<<"\n\nInserting last ";
obj.display();
obj.insertMiddle(2000);
cout<<"\n\n\nAfter inserting the middle element :";
obj.display();	
}
