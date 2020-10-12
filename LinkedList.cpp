#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
} ;

struct Node *head = NULL;

struct Node * addNode(int val){
	
	if(head ==NULL){
		head  = new struct Node;
		head->data = val;
		head->next = NULL; // Represents end of LL 
		return head;	
	}
	
	struct Node * temp = head;
	while(temp->next != NULL){
		temp = temp -> next;
	}
	
	temp -> next  = new struct Node;
	temp -> next->data = val;
	temp -> next->next = NULL; // Represents end of LL 
	return temp -> next ;	
}

void print(){
	struct Node * temp = head;
	while(temp != NULL){
		cout<< temp->data <<"->"<<endl;
		temp = temp -> next;
	}
}

int sizeLL(){
	int count = 0;
	struct Node * temp = head;
	while(temp != NULL){
		count++;
		temp = temp -> next;
	}
	return count;
}

int main()
{
	addNode(1);
	addNode(2);
	addNode(3);
	struct Node * first = addNode(4);
	addNode(5);
	addNode(6);
	addNode(7);
	struct Node * second = addNode(8);
	second->next = first;
	
	struct Node *slow = head, *fast = head;
	
	bool loopExist = false; 
	while(  slow && fast && fast -> next ){
		slow = slow -> next;
		fast = fast -> next -> next;
		
		if(slow == fast ){
			//There is a cycle!
			loopExist = true;
			break;
		}
	}
	
	cout<<"Loop Exist : "<<loopExist<<endl;
		
	
	return 0;
}