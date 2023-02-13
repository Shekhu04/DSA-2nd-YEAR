#include <iostream>
using namespace std;

/*creation of node using class*/
class Node{
public:
    int data;
    Node *next;
    
    Node (int data){
        this->data=data;
        next=NULL;
    }
};

/*creation of linked list*/
Node *createLinkedList(int n){
    int data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){    /*print linked list until -1 is not input irrespective of the size provided*/
        cin>>data;
        Node*newNode=new Node(data);
        if(data==-1){
            break;
        }
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
 }
 

/*Merging two sorted linked list*/
Node *mergeTwoSortedLinkedList(Node *head1, Node *head2){
Node *result = NULL;
if (head1 == NULL) {
    return head2;
  }
if (head2 == NULL) {
    return head1;
  }
if (head1->data < head2->data) {
    result = head1;
    result->next = mergeTwoSortedLinkedList(head1->next, head2);
  } else {
    result = head2;
    result->next = mergeTwoSortedLinkedList(head1, head2->next);
  }
   return result;
}

/*print the linked list*/
void printLinkedList(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"null"<<"\n";
}


/*get size of linked list*/
int getSizeOfLinkedList(Node *head){
	int size=0;
	Node *p=head;
	while(p!=NULL){
		size++;
		p=p->next;
	}
	return size;
}

/*get any node value which got entered*/
Node* getKthNode(Node *head, int k){
	while(head!=NULL && k>1){
		head=head->next;
		k--;
	}
	return head;
}

/*sorting of linked list occur*/
Node *sort(Node *head){
	if(head==NULL or head->next == NULL){
		return head;
	}
 
	int size = getSizeOfLinkedList(head);
	Node* midNode = getKthNode(head, size/2);
	Node *head2 = midNode->next;
	midNode->next = NULL;
 
	head = sort(head);
	head2= sort(head2);
 
	Node* sortedHead = mergeTwoSortedLinkedList(head, head2);
	return sortedHead;
}


int main(){
    int n; 
    cin>>n; 
    Node* head =createLinkedList(n);
    head=sort(head);
    cout<<"Sorted Linked List"<<" ";
    printLinkedList(head);
    cout<<"size: "<<getSizeOfLinkedList(head)<<"\n";
}



Given list is 
12 11 13 5 6 7 
Sorted list is 
5 6 7 11 12 13 
